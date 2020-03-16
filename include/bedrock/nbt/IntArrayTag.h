#pragma once

#include "Tag.h"
#include <string>
#include "../../unmapped/TagMemoryChunk.h"


class IntArrayTag : public Tag {

public:
    virtual ~IntArrayTag(); // _ZN11IntArrayTagD2Ev
    virtual void __fake_function0(); // fake
    virtual void write(IDataOutput &)const; // _ZNK11IntArrayTag5writeER11IDataOutput
    virtual void load(IDataInput &); // _ZN11IntArrayTag4loadER10IDataInput
    virtual std::string toString()const; // _ZNK11IntArrayTag8toStringB5cxx11Ev
    virtual void getId()const; // _ZNK11IntArrayTag5getIdEv
    virtual void equals(Tag const&)const; // _ZNK11IntArrayTag6equalsERK3Tag
    virtual void copy()const; // _ZNK11IntArrayTag4copyEv
    virtual void hash()const; // _ZNK11IntArrayTag4hashEv
    IntArrayTag(IntArrayTag &&); // _ZN11IntArrayTagC2EOS_
    IntArrayTag(); // _ZN11IntArrayTagC2Ev
    IntArrayTag(TagMemoryChunk); // _ZN11IntArrayTagC2E14TagMemoryChunk
};
