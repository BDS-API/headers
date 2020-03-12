#pragma once

#include "Tag.h"
#include <string>


class Int64Tag : Tag {

public:
    virtual void copy()const;
    virtual void getId()const;
    virtual void write(IDataOutput &)const;
    virtual void load(IDataInput &);
    virtual std::string toString()const;
    virtual void hash()const;
    ~Int64Tag();
    virtual void equals(Tag const&)const;
    Int64Tag();
    Int64Tag(Int64Tag &&);
    Int64Tag(long);
};
