#pragma once

#include "../io/IDataInput.h"
#include "./Int64Tag.h"
#include "../io/IDataOutput.h"
#include "./Tag.h"
#include <string>


class Int64Tag : Tag {

public:
    virtual ~Int64Tag();
    virtual void write(IDataOutput &)const;
    virtual void load(IDataInput &);
    virtual std::string toString()const;
    virtual void getId()const;
    virtual void equals(Tag const&)const;
    virtual void copy()const;
    virtual void hash()const;

    Int64Tag(Int64Tag &&);
    Int64Tag();
    Int64Tag(long);
};
