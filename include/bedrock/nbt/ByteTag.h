#pragma once

#include "Tag.h"
#include <string>


class ByteTag : Tag {

public:
    virtual void getId()const;
    virtual void load(IDataInput &);
    virtual std::string toString()const;
    virtual void write(IDataOutput &)const;
    virtual void equals(Tag const&)const;
    virtual void copy()const;
    virtual void hash()const;
    ~ByteTag();
    ByteTag(ByteTag &&);
    ByteTag(unsigned char);
    ByteTag();
};
