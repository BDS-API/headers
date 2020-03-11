#pragma once

#include "../io/IDataInput.h"
#include "../io/IDataOutput.h"
#include "./Tag.h"
#include "./EndTag.h"
#include <string>


class EndTag : Tag {

public:
    virtual ~EndTag();
    virtual void write(IDataOutput &)const;
    virtual void load(IDataInput &);
    virtual std::string toString()const;
    virtual void getId()const;
    virtual void equals(Tag const&)const;
    virtual void copy()const;
    virtual void hash()const;

    EndTag(EndTag &&);
    EndTag();
};
