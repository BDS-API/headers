#pragma once

#include <vector>
#include <memory>
#include "../../unmapped/TagMemoryChunk.h"
#include <string>
#include "Tag.h"


class CompoundTag : Tag {

public:
    ~CompoundTag(); // _ZN11CompoundTagD2Ev
    virtual void write(IDataOutput &)const; // _ZNK11CompoundTag5writeER11IDataOutput
    virtual void load(IDataInput &); // _ZN11CompoundTag4loadER10IDataInput
    virtual std::string toString()const; // _ZNK11CompoundTag8toStringB5cxx11Ev
    virtual void getId()const; // _ZNK11CompoundTag5getIdEv
    virtual void equals(Tag const&)const; // _ZNK11CompoundTag6equalsERK3Tag
//  virtual void print(std::string const&, PrintStream &)const; //TODO: incomplete function definition // _ZNK11CompoundTag5printERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEER11PrintStream
    virtual void copy()const; // _ZNK11CompoundTag4copyEv
    virtual void hash()const; // _ZNK11CompoundTag4hashEv
    CompoundTag(); // _ZN11CompoundTagC2Ev
    CompoundTag(CompoundTag &&); // _ZN11CompoundTagC2EOS_
    void put(std::string, std::unique_ptr<Tag>); // _ZN11CompoundTag3putENSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt10unique_ptrI3TagSt14default_deleteIS7_EE
    void getAllTags(std::vector<Tag *> &); // _ZN11CompoundTag10getAllTagsERSt6vectorIP3TagSaIS2_EE
    void put(std::string, Tag &&); // _ZN11CompoundTag3putENSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEO3Tag
    void putByte(std::string, unsigned char); // _ZN11CompoundTag7putByteENSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEh
    void putShort(std::string, short); // _ZN11CompoundTag8putShortENSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEs
    void putInt(std::string, int); // _ZN11CompoundTag6putIntENSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEi
    void putInt64(std::string, long); // _ZN11CompoundTag8putInt64ENSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEl
    void putFloat(std::string, float); // _ZN11CompoundTag8putFloatENSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEf
    void putDouble(std::string, double); // _ZN11CompoundTag9putDoubleENSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEd
    void putString(std::string, std::string); // _ZN11CompoundTag9putStringENSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEES5_
    void putByteArray(std::string, TagMemoryChunk); // _ZN11CompoundTag12putByteArrayENSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE14TagMemoryChunk
    void putCompound(std::string, CompoundTag); // _ZN11CompoundTag11putCompoundENSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEES_
    void putCompound(std::string, std::unique_ptr<CompoundTag>); // _ZN11CompoundTag11putCompoundENSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt10unique_ptrIS_St14default_deleteIS_EE
    void putBoolean(std::string, bool); // _ZN11CompoundTag10putBooleanENSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEb
    void append(CompoundTag const&); // _ZN11CompoundTag6appendERKS_
    void contains(std::string const&)const; // _ZNK11CompoundTag8containsERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    void get(std::string const&)const; // _ZNK11CompoundTag3getERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
//  void contains(std::string const&, Tag::Type)const; //TODO: incomplete function definition // _ZNK11CompoundTag8containsERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEN3Tag4TypeE
    void get(std::string const&); // _ZN11CompoundTag3getERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    void getByteTag(std::string const&)const; // _ZNK11CompoundTag10getByteTagERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    void getByteTag(std::string const&); // _ZN11CompoundTag10getByteTagERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    void getByte(std::string const&)const; // _ZNK11CompoundTag7getByteERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    void getShortTag(std::string const&)const; // _ZNK11CompoundTag11getShortTagERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    void getShortTag(std::string const&); // _ZN11CompoundTag11getShortTagERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    void getShort(std::string const&)const; // _ZNK11CompoundTag8getShortERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    void getIntTag(std::string const&)const; // _ZNK11CompoundTag9getIntTagERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    void getIntTag(std::string const&); // _ZN11CompoundTag9getIntTagERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    void getInt(std::string const&)const; // _ZNK11CompoundTag6getIntERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    void getInt64Tag(std::string const&)const; // _ZNK11CompoundTag11getInt64TagERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    void getInt64Tag(std::string const&); // _ZN11CompoundTag11getInt64TagERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    void getInt64(std::string const&)const; // _ZNK11CompoundTag8getInt64ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    void getFloatTag(std::string const&)const; // _ZNK11CompoundTag11getFloatTagERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    void getFloatTag(std::string const&); // _ZN11CompoundTag11getFloatTagERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    void getFloat(std::string const&)const; // _ZNK11CompoundTag8getFloatERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    void getDoubleTag(std::string const&)const; // _ZNK11CompoundTag12getDoubleTagERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    void getDoubleTag(std::string const&); // _ZN11CompoundTag12getDoubleTagERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    void getDouble(std::string const&)const; // _ZNK11CompoundTag9getDoubleERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    void getStringTag(std::string const&)const; // _ZNK11CompoundTag12getStringTagERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    void getStringTag(std::string const&); // _ZN11CompoundTag12getStringTagERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    void getString(std::string const&)const; // _ZNK11CompoundTag9getStringERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    void getByteArrayTag(std::string const&)const; // _ZNK11CompoundTag15getByteArrayTagERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    void getByteArrayTag(std::string const&); // _ZN11CompoundTag15getByteArrayTagERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    void getByteArray(std::string const&)const; // _ZNK11CompoundTag12getByteArrayERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    void getIntArrayTag(std::string const&)const; // _ZNK11CompoundTag14getIntArrayTagERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    void getIntArrayTag(std::string const&); // _ZN11CompoundTag14getIntArrayTagERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    void getIntArray(std::string const&)const; // _ZNK11CompoundTag11getIntArrayERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    void getCompound(std::string const&)const; // _ZNK11CompoundTag11getCompoundERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    void getCompound(std::string const&); // _ZN11CompoundTag11getCompoundERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    void getList(std::string const&)const; // _ZNK11CompoundTag7getListERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    void getList(std::string const&); // _ZN11CompoundTag7getListERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    void getBoolean(std::string const&)const; // _ZNK11CompoundTag10getBooleanERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    bool isEmpty()const; // _ZNK11CompoundTag7isEmptyEv
    void clear(); // _ZN11CompoundTag5clearEv
    void clone()const; // _ZNK11CompoundTag5cloneEv
    void deepCopy(CompoundTag const&); // _ZN11CompoundTag8deepCopyERKS_
    std::string rawView()const; // _ZNK11CompoundTag7rawViewB5cxx11Ev
    void rename(std::string const&, std::string); // _ZN11CompoundTag6renameERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEES5_
    void remove(std::string const&); // _ZN11CompoundTag6removeERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    std::string begin()const; // _ZNK11CompoundTag5beginB5cxx11Ev
    std::string end()const; // _ZNK11CompoundTag3endB5cxx11Ev
};
