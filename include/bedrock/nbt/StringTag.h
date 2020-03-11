#pragma once

#include "../io/IDataInput.h"
#include "../io/IDataOutput.h"
#include "./Tag.h"
#include "./StringTag.h"
#include <string>


class StringTag : Tag {

public:
    virtual ~StringTag();
    virtual void write(IDataOutput &)const;
    virtual void load(IDataInput &);
    virtual std::string toString()const;
    virtual void getId()const;
    virtual void equals(Tag const&)const;
    virtual void copy()const;
    virtual void hash()const;

    StringTag(StringTag &&);
    StringTag();
    StringTag(std::string);
};
