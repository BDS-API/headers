#pragma once

#include <string>
#include "Tag.h"


class FloatTag : Tag {

public:
    ~FloatTag(); // _ZN8FloatTagD2Ev
    virtual void write(IDataOutput &)const; // _ZNK8FloatTag5writeER11IDataOutput
    virtual void load(IDataInput &); // _ZN8FloatTag4loadER10IDataInput
    virtual std::string toString()const; // _ZNK8FloatTag8toStringB5cxx11Ev
    virtual void getId()const; // _ZNK8FloatTag5getIdEv
    virtual void equals(Tag const&)const; // _ZNK8FloatTag6equalsERK3Tag
    virtual void copy()const; // _ZNK8FloatTag4copyEv
    virtual void hash()const; // _ZNK8FloatTag4hashEv
    FloatTag(FloatTag &&); // _ZN8FloatTagC2EOS_
    FloatTag(); // _ZN8FloatTagC2Ev
    FloatTag(float); // _ZN8FloatTagC2Ef
};
