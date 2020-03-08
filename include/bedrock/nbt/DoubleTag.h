#pragma once

#include "../io/IDataInput"
#include "../io/IDataOutput"


class DoubleTag : Tag {

public:
    virtual DoubleTag::~DoubleTag()
    virtual void write(IDataOutput &)const;
    virtual void load(IDataInput &);
    virtual void toString()const;
    virtual void getId()const;
    virtual void equals(Tag const&)const;
    virtual void copy()const;
    virtual void hash()const;

    DoubleTag(DoubleTag&&);
    DoubleTag(void);
    DoubleTag(double);
};
