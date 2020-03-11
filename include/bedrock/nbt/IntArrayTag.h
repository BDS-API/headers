#pragma once

#include "../io/IDataInput.h"
#include "../io/IDataOutput.h"
#include "./Tag.h"
#include "./IntArrayTag.h"
#include "../../unmapped/TagMemoryChunk.h"
#include <string>


class IntArrayTag : Tag {

public:
    virtual ~IntArrayTag();
    virtual void write(IDataOutput &)const;
    virtual void load(IDataInput &);
    virtual std::string toString()const;
    virtual void getId()const;
    virtual void equals(Tag const&)const;
    virtual void copy()const;
    virtual void hash()const;

    IntArrayTag(IntArrayTag &&);
    IntArrayTag();
    IntArrayTag(TagMemoryChunk);
};
