#pragma once

#include "Tag.h"
#include "../io/IDataInput.h"
#include "../io/IDataOutput.h"


class EndTag : Tag {

public:
    ~EndTag();
    virtual void hash()const;
    virtual void load(IDataInput &);
    virtual void write(IDataOutput &)const;
    virtual void equals(Tag const&)const;
    virtual void copy()const;
    virtual void getId()const;
    virtual std::string toString()const;
    EndTag();
    EndTag(EndTag &&);
};
