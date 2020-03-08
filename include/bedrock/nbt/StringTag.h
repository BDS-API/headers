#pragma once

#include "../io/IDataInput"
#include "../io/IDataOutput"


class StringTag : Tag {

public:
    virtual StringTag::~StringTag()
    virtual void write(IDataOutput &)const;
    virtual void load(IDataInput &);
    virtual void toString()const;
    virtual void getId()const;
    virtual void equals(Tag const&)const;
    virtual void copy()const;
    virtual void hash()const;

    StringTag(StringTag&&);
    StringTag(void);
    StringTag(std::string);
};
