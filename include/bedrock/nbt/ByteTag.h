#pragma once

#include <string>
#include "Tag.h"


class ByteTag : Tag {

public:
    ~ByteTag(); // _ZN7ByteTagD2Ev
    virtual void write(IDataOutput &)const; // _ZNK7ByteTag5writeER11IDataOutput
    virtual void load(IDataInput &); // _ZN7ByteTag4loadER10IDataInput
    virtual std::string toString()const; // _ZNK7ByteTag8toStringB5cxx11Ev
    virtual void getId()const; // _ZNK7ByteTag5getIdEv
    virtual void equals(Tag const&)const; // _ZNK7ByteTag6equalsERK3Tag
    virtual void copy()const; // _ZNK7ByteTag4copyEv
    virtual void hash()const; // _ZNK7ByteTag4hashEv
    ByteTag(ByteTag &&); // _ZN7ByteTagC2EOS_
    ByteTag(); // _ZN7ByteTagC2Ev
    ByteTag(unsigned char); // _ZN7ByteTagC2Eh
};
