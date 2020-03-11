#pragma once

#include "../io/IDataInput.h"
#include "./ByteTag.h"
#include "../io/IDataOutput.h"
#include "./Tag.h"
#include <string>


class ByteTag : Tag {

public:
    virtual ~ByteTag();
    virtual void write(IDataOutput &)const;
    virtual void load(IDataInput &);
    virtual std::string toString()const;
    virtual void getId()const;
    virtual void equals(Tag const&)const;
    virtual void copy()const;
    virtual void hash()const;

    ByteTag(ByteTag &&);
    ByteTag();
    ByteTag(unsigned char);
};
