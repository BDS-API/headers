#pragma once

#include "Tag.h"
#include <string>


class IntTag : Tag {

public:
    virtual void equals(Tag const&)const;
    virtual void load(IDataInput &);
    virtual std::string toString()const;
    virtual void write(IDataOutput &)const;
    virtual void getId()const;
    virtual void copy()const;
    virtual void hash()const;
    ~IntTag();
    IntTag(int);
    IntTag();
    IntTag(IntTag &&);
};
