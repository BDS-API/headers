#pragma once

#include "../io/IDataOutput"
#include "../io/IDataInput"


class ByteTag : Tag {

public:
    ByteTag::~ByteTag()
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
