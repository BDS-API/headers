#pragma once

#include "Tag.h"
#include "../io/IDataInput.h"
#include "../../unmapped/TagMemoryChunk.h"
#include "../io/IDataOutput.h"


class ByteArrayTag : Tag {

public:
    virtual std::string toString()const;
    virtual void write(IDataOutput &)const;
    virtual void hash()const;
    virtual void equals(Tag const&)const;
    virtual void getId()const;
    ~ByteArrayTag();
    virtual void copy()const;
    virtual void load(IDataInput &);
    ByteArrayTag(TagMemoryChunk);
    ByteArrayTag(ByteArrayTag &&);
    ByteArrayTag();
};
