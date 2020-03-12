#pragma once

#include "Tag.h"
#include <string>
#include "../../unmapped/TagMemoryChunk.h"


class ByteArrayTag : Tag {

public:
    virtual std::string toString()const;
    virtual void hash()const;
    virtual void load(IDataInput &);
    virtual void copy()const;
    virtual void equals(Tag const&)const;
    virtual void write(IDataOutput &)const;
    virtual void getId()const;
    ~ByteArrayTag();
    ByteArrayTag();
    ByteArrayTag(TagMemoryChunk);
    ByteArrayTag(ByteArrayTag &&);
};
