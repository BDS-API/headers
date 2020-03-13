#pragma once

#include <string>
#include "../../unmapped/TagMemoryChunk.h"
#include "Tag.h"


class ByteArrayTag : Tag {

public:
    ~ByteArrayTag(); // _ZN12ByteArrayTagD2Ev
    virtual void write(IDataOutput &)const; // _ZNK12ByteArrayTag5writeER11IDataOutput
    virtual void load(IDataInput &); // _ZN12ByteArrayTag4loadER10IDataInput
    virtual std::string toString()const; // _ZNK12ByteArrayTag8toStringB5cxx11Ev
    virtual void getId()const; // _ZNK12ByteArrayTag5getIdEv
    virtual void equals(Tag const&)const; // _ZNK12ByteArrayTag6equalsERK3Tag
    virtual void copy()const; // _ZNK12ByteArrayTag4copyEv
    virtual void hash()const; // _ZNK12ByteArrayTag4hashEv
    ByteArrayTag(ByteArrayTag &&); // _ZN12ByteArrayTagC2EOS_
    ByteArrayTag(); // _ZN12ByteArrayTagC2Ev
    ByteArrayTag(TagMemoryChunk); // _ZN12ByteArrayTagC2E14TagMemoryChunk
};
