#pragma once

#include <string>
#include <memory>
#include "Tag.h"


class ListTag : Tag {

public:
    ~ListTag();
    virtual void deleteChildren();
    virtual void copy()const;
    virtual void write(IDataOutput &)const;
    virtual void getId()const;
    virtual void equals(Tag const&)const;
    virtual void hash()const;
    virtual std::string toString()const;
    virtual void load(IDataInput &);
//  virtual void print(std::string const&, PrintStream &)const; //TODO: incomplete function definition
    void get(int)const;
    void size()const;
    void getInt(int)const;
    void add(std::unique_ptr<Tag>);
    ListTag();
    void getFloat(int)const;
    std::string getString(int)const;
    void getCompound(unsigned long)const;
    void getDouble(int)const;
    ListTag(ListTag &&);
};
