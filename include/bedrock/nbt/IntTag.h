#pragma once

#include "Tag.h"
#include "../io/IDataInput.h"
#include "../io/IDataOutput.h"


class IntTag : Tag {

public:
    virtual void copy()const;
    virtual void load(IDataInput &);
    ~IntTag();
    virtual void write(IDataOutput &)const;
    virtual void getId()const;
    virtual std::string toString()const;
    virtual void equals(Tag const&)const;
    virtual void hash()const;
    IntTag();
    IntTag(IntTag &&);
    IntTag(int);
};
