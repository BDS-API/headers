#pragma once

#include "Tag.h"
#include "../io/IDataInput.h"
#include "../io/IDataOutput.h"


class ByteTag : Tag {

public:
    virtual void write(IDataOutput &)const;
    virtual std::string toString()const;
    virtual void load(IDataInput &);
    ~ByteTag();
    virtual void equals(Tag const&)const;
    virtual void copy()const;
    virtual void getId()const;
    virtual void hash()const;
    ByteTag(ByteTag &&);
    ByteTag();
    ByteTag(unsigned char);
};
