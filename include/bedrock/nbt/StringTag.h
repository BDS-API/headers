#pragma once

#include <string>
#include "Tag.h"
#include "../io/IDataInput.h"
#include "../io/IDataOutput.h"


class StringTag : Tag {

public:
    virtual void equals(Tag const&)const;
    ~StringTag();
    virtual void copy()const;
    virtual void load(IDataInput &);
    virtual void getId()const;
    virtual void hash()const;
    virtual std::string toString()const;
    virtual void write(IDataOutput &)const;
    StringTag();
    StringTag(StringTag &&);
    StringTag(std::string);
};
