#pragma once

#include "../io/IDataOutput"
#include "../io/IDataInput"
#include "../../unmapped/TagMemoryChunk"


class IntArrayTag : Tag {

public:
    IntArrayTag::~IntArrayTag()
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
