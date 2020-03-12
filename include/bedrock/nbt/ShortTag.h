#pragma once

#include "Tag.h"
#include "../io/IDataInput.h"
#include "../io/IDataOutput.h"


class ShortTag : Tag {

public:
    virtual void copy()const;
    virtual void getId()const;
    virtual void equals(Tag const&)const;
    virtual void write(IDataOutput &)const;
    virtual std::string toString()const;
    virtual void hash()const;
    virtual void load(IDataInput &);
    ~ShortTag();
    ShortTag(ShortTag &&);
    ShortTag();
    ShortTag(short);
};
