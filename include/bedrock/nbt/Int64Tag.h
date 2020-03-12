#pragma once

#include "Tag.h"
#include "../io/IDataInput.h"
#include "../io/IDataOutput.h"


class Int64Tag : Tag {

public:
    virtual void write(IDataOutput &)const;
    virtual void load(IDataInput &);
    virtual void equals(Tag const&)const;
    ~Int64Tag();
    virtual std::string toString()const;
    virtual void getId()const;
    virtual void hash()const;
    virtual void copy()const;
    Int64Tag(Int64Tag &&);
    Int64Tag(long);
    Int64Tag();
};
