#pragma once

#include "../io/IDataOutput"
#include "../io/IDataInput"


class Int64Tag : Tag {

public:
    Int64Tag::~Int64Tag()
    virtual void write(IDataOutput &)const;
    virtual void load(IDataInput &);
    virtual void toString()const;
    virtual void getId()const;
    virtual void equals(Tag const&)const;
    virtual void copy()const;
    virtual void hash()const;

    Int64Tag(Int64Tag&&);
    Int64Tag(void);
    Int64Tag(long);
};
