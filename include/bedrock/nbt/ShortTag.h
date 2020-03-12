#pragma once

#include "Tag.h"
#include <string>


class ShortTag : Tag {

public:
    virtual void copy()const;
    virtual void getId()const;
    ~ShortTag();
    virtual void write(IDataOutput &)const;
    virtual void load(IDataInput &);
    virtual void hash()const;
    virtual std::string toString()const;
    virtual void equals(Tag const&)const;
    ShortTag();
    ShortTag(short);
    ShortTag(ShortTag &&);
};
