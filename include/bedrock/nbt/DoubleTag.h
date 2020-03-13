#pragma once

#include <string>
#include "Tag.h"


class DoubleTag : Tag {

public:
    ~DoubleTag(); // _ZN9DoubleTagD2Ev
    virtual void write(IDataOutput &)const; // _ZNK9DoubleTag5writeER11IDataOutput
    virtual void load(IDataInput &); // _ZN9DoubleTag4loadER10IDataInput
    virtual std::string toString()const; // _ZNK9DoubleTag8toStringB5cxx11Ev
    virtual void getId()const; // _ZNK9DoubleTag5getIdEv
    virtual void equals(Tag const&)const; // _ZNK9DoubleTag6equalsERK3Tag
    virtual void copy()const; // _ZNK9DoubleTag4copyEv
    virtual void hash()const; // _ZNK9DoubleTag4hashEv
    DoubleTag(DoubleTag &&); // _ZN9DoubleTagC2EOS_
    DoubleTag(); // _ZN9DoubleTagC2Ev
    DoubleTag(double); // _ZN9DoubleTagC2Ed
};
