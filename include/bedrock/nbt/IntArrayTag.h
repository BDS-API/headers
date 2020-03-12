#pragma once

#include "Tag.h"
#include <string>
#include "../../unmapped/TagMemoryChunk.h"


class IntArrayTag : Tag {

public:
    virtual void getId()const;
    virtual void equals(Tag const&)const;
    virtual void write(IDataOutput &)const;
    virtual std::string toString()const;
    virtual void hash()const;
    virtual void copy()const;
    ~IntArrayTag();
    virtual void load(IDataInput &);
    IntArrayTag(TagMemoryChunk);
    IntArrayTag(IntArrayTag &&);
    IntArrayTag();
};
