#pragma once

#include "./IntTag.h"
#include "../io/IDataInput.h"
#include "../io/IDataOutput.h"
#include "./Tag.h"
#include <string>


class IntTag : Tag {

public:
    virtual ~IntTag();
    virtual void write(IDataOutput &)const;
    virtual void load(IDataInput &);
    virtual std::string toString()const;
    virtual void getId()const;
    virtual void equals(Tag const&)const;
    virtual void copy()const;
    virtual void hash()const;

    IntTag(IntTag &&);
    IntTag();
    IntTag(int);
};
