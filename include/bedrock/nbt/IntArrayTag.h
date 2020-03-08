#pragma once

#include "../io/IDataInput"
#include "../io/IDataOutput"
#include "../../unmapped/TagMemoryChunk"


class IntArrayTag : Tag {

public:
    virtual IntArrayTag::~IntArrayTag()
    virtual void write(IDataOutput &)const;
    virtual void load(IDataInput &);
    virtual void toString()const;
    virtual void getId()const;
    virtual void equals(Tag const&)const;
    virtual void copy()const;
    virtual void hash()const;

    IntArrayTag(IntArrayTag&&);
    IntArrayTag(void);
    IntArrayTag(TagMemoryChunk);
};
