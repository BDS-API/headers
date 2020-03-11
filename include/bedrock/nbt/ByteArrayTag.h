#pragma once

#include "../io/IDataInput.h"
#include "./ByteArrayTag.h"
#include "../io/IDataOutput.h"
#include "./Tag.h"
#include "../../unmapped/TagMemoryChunk.h"
#include <string>


class ByteArrayTag : Tag {

public:
    virtual ~ByteArrayTag();
    virtual void write(IDataOutput &)const;
    virtual void load(IDataInput &);
    virtual std::string toString()const;
    virtual void getId()const;
    virtual void equals(Tag const&)const;
    virtual void copy()const;
    virtual void hash()const;

    ByteArrayTag(ByteArrayTag &&);
    ByteArrayTag();
    ByteArrayTag(TagMemoryChunk);
};
