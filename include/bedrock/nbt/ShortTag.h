#pragma once

#include "../io/IDataOutput"
#include "../io/IDataInput"


class ShortTag : Tag {

public:
    ShortTag::~ShortTag()
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
