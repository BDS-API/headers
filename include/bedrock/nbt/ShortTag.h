#pragma once

#include "../io/IDataInput.h"
#include "../io/IDataOutput.h"
#include "./Tag.h"
#include "./ShortTag.h"
#include <string>


class ShortTag : Tag {

public:
    virtual ~ShortTag();
    virtual void write(IDataOutput &)const;
    virtual void load(IDataInput &);
    virtual std::string toString()const;
    virtual void getId()const;
    virtual void equals(Tag const&)const;
    virtual void copy()const;
    virtual void hash()const;

    ShortTag(ShortTag &&);
    ShortTag();
    ShortTag(short);
};
