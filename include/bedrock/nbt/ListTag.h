#pragma once

#include "Tag.h"
#include <string>
#include "../io/IDataOutput.h"
#include "../io/IDataInput.h"
#include <memory>


class ListTag : Tag {

public:
    virtual void write(IDataOutput &)const;
    virtual void getId()const;
    virtual void equals(Tag const&)const;
    virtual void hash()const;
    virtual std::string toString()const;
    virtual void deleteChildren();
//  virtual void print(std::string const&, PrintStream &)const; //TODO: incomplete function definition
    virtual void copy()const;
    ~ListTag();
    virtual void load(IDataInput &);
    void size()const;
    std::string getString(int)const;
    void getDouble(int)const;
    ListTag(ListTag &&);
    ListTag();
    void getCompound(unsigned long)const;
    void getFloat(int)const;
    void add(std::unique_ptr<Tag>);
    void get(int)const;
    void getInt(int)const;
};
