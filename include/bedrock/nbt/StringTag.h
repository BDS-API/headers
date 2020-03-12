#pragma once

#include "Tag.h"
#include <string>


class StringTag : Tag {

public:
    virtual void equals(Tag const&)const;
    virtual std::string toString()const;
    virtual void hash()const;
    virtual void getId()const;
    virtual void copy()const;
    virtual void load(IDataInput &);
    ~StringTag();
    virtual void write(IDataOutput &)const;
    StringTag(std::string);
    StringTag();
    StringTag(StringTag &&);
};
