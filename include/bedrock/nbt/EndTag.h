#pragma once

#include <string>
#include "Tag.h"


class EndTag : Tag {

public:
    ~EndTag(); // _ZN6EndTagD2Ev
    virtual void write(IDataOutput &)const; // _ZNK6EndTag5writeER11IDataOutput
    virtual void load(IDataInput &); // _ZN6EndTag4loadER10IDataInput
    virtual std::string toString()const; // _ZNK6EndTag8toStringB5cxx11Ev
    virtual void getId()const; // _ZNK6EndTag5getIdEv
    virtual void equals(Tag const&)const; // _ZNK6EndTag6equalsERK3Tag
    virtual void copy()const; // _ZNK6EndTag4copyEv
    virtual void hash()const; // _ZNK6EndTag4hashEv
    EndTag(EndTag &&); // _ZN6EndTagC2EOS_
    EndTag(); // _ZN6EndTagC2Ev
};
