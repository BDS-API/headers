#pragma once

#include <string>
#include "Tag.h"


class ShortTag : Tag {

public:
    ~ShortTag(); // _ZN8ShortTagD2Ev
    virtual void write(IDataOutput &)const; // _ZNK8ShortTag5writeER11IDataOutput
    virtual void load(IDataInput &); // _ZN8ShortTag4loadER10IDataInput
    virtual std::string toString()const; // _ZNK8ShortTag8toStringB5cxx11Ev
    virtual void getId()const; // _ZNK8ShortTag5getIdEv
    virtual void equals(Tag const&)const; // _ZNK8ShortTag6equalsERK3Tag
    virtual void copy()const; // _ZNK8ShortTag4copyEv
    virtual void hash()const; // _ZNK8ShortTag4hashEv
    ShortTag(ShortTag &&); // _ZN8ShortTagC2EOS_
    ShortTag(); // _ZN8ShortTagC2Ev
    ShortTag(short); // _ZN8ShortTagC2Es
};
