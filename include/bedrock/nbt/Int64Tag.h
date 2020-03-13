#pragma once

#include <string>
#include "Tag.h"


class Int64Tag : Tag {

public:
    ~Int64Tag(); // _ZN8Int64TagD2Ev
    virtual void write(IDataOutput &)const; // _ZNK8Int64Tag5writeER11IDataOutput
    virtual void load(IDataInput &); // _ZN8Int64Tag4loadER10IDataInput
    virtual std::string toString()const; // _ZNK8Int64Tag8toStringB5cxx11Ev
    virtual void getId()const; // _ZNK8Int64Tag5getIdEv
    virtual void equals(Tag const&)const; // _ZNK8Int64Tag6equalsERK3Tag
    virtual void copy()const; // _ZNK8Int64Tag4copyEv
    virtual void hash()const; // _ZNK8Int64Tag4hashEv
    Int64Tag(Int64Tag &&); // _ZN8Int64TagC2EOS_
    Int64Tag(); // _ZN8Int64TagC2Ev
    Int64Tag(long); // _ZN8Int64TagC2El
};
