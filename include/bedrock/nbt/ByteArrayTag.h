#pragma once

#include "../io/IDataInput"
#include "../io/IDataOutput"
#include "../../unmapped/TagMemoryChunk"


class ByteArrayTag : Tag {

public:
    virtual ByteArrayTag::~ByteArrayTag()
    virtual void write(IDataOutput &)const;
    virtual void load(IDataInput &);
    virtual void toString()const;
    virtual void getId()const;
    virtual void equals(Tag const&)const;
    virtual void copy()const;
    virtual void hash()const;

    ByteArrayTag(ByteArrayTag&&);
    ByteArrayTag(void);
    ByteArrayTag(TagMemoryChunk);
};
