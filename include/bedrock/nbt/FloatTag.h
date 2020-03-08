#pragma once

#include "../io/IDataOutput"
#include "../io/IDataInput"


class FloatTag : Tag {

public:
    FloatTag::~FloatTag()
    virtual void write(IDataOutput &)const;
    virtual void load(IDataInput &);
    virtual void toString()const;
    virtual void getId()const;
    virtual void equals(Tag const&)const;
    virtual void copy()const;
    virtual void hash()const;

    FloatTag(FloatTag&&);
    FloatTag(void);
    FloatTag(float);
};
