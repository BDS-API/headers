#pragma once

#include <string>
#include "Tag.h"


class StringTag : Tag {

public:
    ~StringTag(); // _ZN9StringTagD2Ev
    virtual void write(IDataOutput &)const; // _ZNK9StringTag5writeER11IDataOutput
    virtual void load(IDataInput &); // _ZN9StringTag4loadER10IDataInput
    virtual std::string toString()const; // _ZNK9StringTag8toStringB5cxx11Ev
    virtual void getId()const; // _ZNK9StringTag5getIdEv
    virtual void equals(Tag const&)const; // _ZNK9StringTag6equalsERK3Tag
    virtual void copy()const; // _ZNK9StringTag4copyEv
    virtual void hash()const; // _ZNK9StringTag4hashEv
    StringTag(StringTag &&); // _ZN9StringTagC2EOS_
    StringTag(); // _ZN9StringTagC2Ev
    StringTag(std::string); // _ZN9StringTagC2ENSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
};
