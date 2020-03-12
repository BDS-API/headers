#pragma once

#include "Tag.h"
#include <string>


class DoubleTag : Tag {

public:
    virtual void hash()const;
    virtual void getId()const;
    ~DoubleTag();
    virtual void equals(Tag const&)const;
    virtual std::string toString()const;
    virtual void write(IDataOutput &)const;
    virtual void copy()const;
    virtual void load(IDataInput &);
    DoubleTag(double);
    DoubleTag(DoubleTag &&);
    DoubleTag();
};
