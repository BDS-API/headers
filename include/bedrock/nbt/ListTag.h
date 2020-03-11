#pragma once

#include "../io/IDataInput.h"
#include <memory>
#include "../io/IDataOutput.h"
#include "./Tag.h"
#include "./ListTag.h"
#include <string>


class ListTag : Tag {

public:
    virtual ~ListTag();
    virtual void deleteChildren();
    virtual void write(IDataOutput &)const;
    virtual void load(IDataInput &);
    virtual std::string toString()const;
    virtual void getId()const;
    virtual void equals(Tag const&)const;
//  virtual void print(std::string const&, PrintStream &)const; //TODO: incomplete function definition
    virtual void copy()const;
    virtual void hash()const;

    ListTag(ListTag &&);
    ListTag();
    void add(std::unique_ptr<Tag, std::default_delete<Tag>>);
    void get(int)const;
    void size()const;
    void getFloat(int)const;
    void getInt(int)const;
    void getDouble(int)const;
    std::string getString(int)const;
    void getCompound(unsigned long)const;
};
