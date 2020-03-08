#pragma once

#include "../io/IDataInput"
#include "../io/IDataOutput"


class IntTag : Tag {

public:
    virtual IntTag::~IntTag()
    virtual void write(IDataOutput &)const;
    virtual void load(IDataInput &);
    virtual void toString()const;
    virtual void getId()const;
    virtual void equals(Tag const&)const;
    virtual void copy()const;
    virtual void hash()const;

    IntTag(IntTag&&);
    IntTag(void);
    IntTag(int);
};
