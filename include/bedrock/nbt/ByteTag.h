#pragma once

#include "../io/IDataInput"
#include "../io/IDataOutput"


class ByteTag : Tag {

public:
    virtual ByteTag::~ByteTag()
    virtual void write(IDataOutput &)const;
    virtual void load(IDataInput &);
    virtual void toString()const;
    virtual void getId()const;
    virtual void equals(Tag const&)const;
    virtual void copy()const;
    virtual void hash()const;

    ByteTag(ByteTag&&);
    ByteTag(void);
    ByteTag(unsigned char);
};
