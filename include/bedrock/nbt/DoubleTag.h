#pragma once

#include "Tag.h"
#include "../io/IDataInput.h"
#include "../io/IDataOutput.h"


class DoubleTag : Tag {

public:
    ~DoubleTag();
    virtual void hash()const;
    virtual std::string toString()const;
    virtual void equals(Tag const&)const;
    virtual void load(IDataInput &);
    virtual void getId()const;
    virtual void copy()const;
    virtual void write(IDataOutput &)const;
    DoubleTag(double);
    DoubleTag(DoubleTag &&);
    DoubleTag();
};
