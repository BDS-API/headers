#pragma once

#include <string>
#include "Tag.h"


class IntTag : Tag {

public:
    ~IntTag(); // _ZN6IntTagD2Ev
    virtual void write(IDataOutput &)const; // _ZNK6IntTag5writeER11IDataOutput
    virtual void load(IDataInput &); // _ZN6IntTag4loadER10IDataInput
    virtual std::string toString()const; // _ZNK6IntTag8toStringB5cxx11Ev
    virtual void getId()const; // _ZNK6IntTag5getIdEv
    virtual void equals(Tag const&)const; // _ZNK6IntTag6equalsERK3Tag
    virtual void copy()const; // _ZNK6IntTag4copyEv
    virtual void hash()const; // _ZNK6IntTag4hashEv
    IntTag(IntTag &&); // _ZN6IntTagC2EOS_
    IntTag(); // _ZN6IntTagC2Ev
    IntTag(int); // _ZN6IntTagC2Ei
};
