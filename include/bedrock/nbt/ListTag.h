#pragma once

#include <string>
#include <memory>
#include "Tag.h"


class ListTag : Tag {

public:
    ~ListTag(); // _ZN7ListTagD2Ev
    virtual void deleteChildren(); // _ZN7ListTag14deleteChildrenEv
    virtual void write(IDataOutput &)const; // _ZNK7ListTag5writeER11IDataOutput
    virtual void load(IDataInput &); // _ZN7ListTag4loadER10IDataInput
    virtual std::string toString()const; // _ZNK7ListTag8toStringB5cxx11Ev
    virtual void getId()const; // _ZNK7ListTag5getIdEv
    virtual void equals(Tag const&)const; // _ZNK7ListTag6equalsERK3Tag
//  virtual void print(std::string const&, PrintStream &)const; //TODO: incomplete function definition // _ZNK7ListTag5printERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEER11PrintStream
    virtual void copy()const; // _ZNK7ListTag4copyEv
    virtual void hash()const; // _ZNK7ListTag4hashEv
    ListTag(ListTag &&); // _ZN7ListTagC2EOS_
    ListTag(); // _ZN7ListTagC2Ev
    void add(std::unique_ptr<Tag>); // _ZN7ListTag3addESt10unique_ptrI3TagSt14default_deleteIS1_EE
    void get(int)const; // _ZNK7ListTag3getEi
    void size()const; // _ZNK7ListTag4sizeEv
    void getFloat(int)const; // _ZNK7ListTag8getFloatEi
    void getInt(int)const; // _ZNK7ListTag6getIntEi
    void getDouble(int)const; // _ZNK7ListTag9getDoubleEi
    std::string getString(int)const; // _ZNK7ListTag9getStringB5cxx11Ei
    void getCompound(unsigned long)const; // _ZNK7ListTag11getCompoundEm
};
