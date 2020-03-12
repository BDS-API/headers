#pragma once

#include "Tag.h"
#include "../io/IDataInput.h"
#include "../io/IDataOutput.h"


class FloatTag : Tag {

public:
    ~FloatTag();
    virtual void load(IDataInput &);
    virtual void write(IDataOutput &)const;
    virtual void copy()const;
    virtual void getId()const;
    virtual void equals(Tag const&)const;
    virtual std::string toString()const;
    virtual void hash()const;
    FloatTag(FloatTag &&);
    FloatTag();
    FloatTag(float);
};
