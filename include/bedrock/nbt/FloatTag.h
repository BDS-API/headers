#pragma once

#include "../io/IDataInput.h"
#include "../io/IDataOutput.h"
#include "./Tag.h"
#include "./FloatTag.h"
#include <string>


class FloatTag : Tag {

public:
    virtual ~FloatTag();
    virtual void write(IDataOutput &)const;
    virtual void load(IDataInput &);
    virtual std::string toString()const;
    virtual void getId()const;
    virtual void equals(Tag const&)const;
    virtual void copy()const;
    virtual void hash()const;

    FloatTag(FloatTag &&);
    FloatTag();
    FloatTag(float);
};
