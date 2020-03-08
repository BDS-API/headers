#pragma once

#include "../io/IDataOutput"
#include "../io/IDataInput"
#include "../../unmapped/TagMemoryChunk"


class ByteArrayTag : Tag {

public:
    virtual ByteArrayTag::~ByteArrayTag();
    virtual void write(IDataOutput &)const;
    virtual void load(IDataInput &);
    virtual void toString[abi:cxx11](void)const;
    virtual void getId(void)const;
    virtual void equals(Tag const&)const;
    virtual void copy(void)const;
    virtual void hash(void)const;

    ByteArrayTag(ByteArrayTag&&);
    ByteArrayTag(void);
    ByteArrayTag(TagMemoryChunk);
};
