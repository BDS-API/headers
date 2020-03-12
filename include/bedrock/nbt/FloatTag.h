#pragma once

#include "Tag.h"
#include <string>


class FloatTag : Tag {

public:
    virtual void hash()const;
    virtual void load(IDataInput &);
    virtual void copy()const;
    virtual void getId()const;
    virtual void write(IDataOutput &)const;
    virtual void equals(Tag const&)const;
    virtual std::string toString()const;
    ~FloatTag();
    FloatTag(float);
    FloatTag();
    FloatTag(FloatTag &&);
};
