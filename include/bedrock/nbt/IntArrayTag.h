#pragma once

#include "../io/IDataOutput"
#include "../io/IDataInput"
#include "../../unmapped/TagMemoryChunk"


class IntArrayTag : Tag {

public:
    virtual IntArrayTag::~IntArrayTag();
    virtual void write(IDataOutput &)const;
    virtual void load(IDataInput &);
    virtual void toString[abi:cxx11](void)const;
    virtual void getId(void)const;
    virtual void equals(Tag const&)const;
    virtual void copy(void)const;
    virtual void hash(void)const;

    IntArrayTag(IntArrayTag&&);
    IntArrayTag(void);
    IntArrayTag(TagMemoryChunk);
};
