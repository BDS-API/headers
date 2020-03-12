#pragma once

#include "Tag.h"
#include "../io/IDataInput.h"
#include "../../unmapped/TagMemoryChunk.h"
#include "../io/IDataOutput.h"


class IntArrayTag : Tag {

public:
    virtual void getId()const;
    ~IntArrayTag();
    virtual std::string toString()const;
    virtual void write(IDataOutput &)const;
    virtual void load(IDataInput &);
    virtual void copy()const;
    virtual void hash()const;
    virtual void equals(Tag const&)const;
    IntArrayTag(TagMemoryChunk);
    IntArrayTag();
    IntArrayTag(IntArrayTag &&);
};
