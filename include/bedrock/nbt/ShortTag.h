#pragma once

#include "../io/IDataInput"
#include "../io/IDataOutput"


class ShortTag : Tag {

public:
    virtual ShortTag::~ShortTag()
    virtual void write(IDataOutput &)const;
    virtual void load(IDataInput &);
    virtual void toString()const;
    virtual void getId()const;
    virtual void equals(Tag const&)const;
    virtual void copy()const;
    virtual void hash()const;

    ShortTag(ShortTag&&);
    ShortTag(void);
    ShortTag(short);
};
