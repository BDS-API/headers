#pragma once

#include "Tag.h"
#include <string>


class DoubleTag : public Tag {

public:
    virtual ~DoubleTag(); // _ZN9DoubleTagD2Ev
    virtual void __fake_function0(); // fake
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
