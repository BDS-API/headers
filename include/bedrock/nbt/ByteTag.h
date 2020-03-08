#pragma once

#include "../io/IDataOutput"
#include "../io/IDataInput"


class ByteTag : Tag {

public:
    virtual ByteTag::~ByteTag();
    virtual void write(IDataOutput &)const;
    virtual void load(IDataInput &);
    virtual void toString[abi:cxx11](void)const;
    virtual void getId(void)const;
    virtual void equals(Tag const&)const;
    virtual void copy(void)const;
    virtual void hash(void)const;

    ByteTag(ByteTag&&);
    ByteTag(void);
    ByteTag(unsigned char);
};
