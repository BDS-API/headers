#pragma once

#include "Tag.h"
#include <string>


class EndTag : Tag {

public:
    virtual void equals(Tag const&)const;
    virtual void getId()const;
    ~EndTag();
    virtual void hash()const;
    virtual void copy()const;
    virtual void write(IDataOutput &)const;
    virtual void load(IDataInput &);
    virtual std::string toString()const;
    EndTag();
    EndTag(EndTag &&);
};
