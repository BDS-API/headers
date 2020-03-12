#pragma once

#include "Tag.h"
#include "../io/IDataOutput.h"
#include <string>
#include "../../unmapped/TagMemoryChunk.h"
#include "../io/IDataInput.h"
#include <vector>
#include <memory>


class CompoundTag : Tag {

public:
    virtual void hash()const;
    ~CompoundTag();
    virtual void copy()const;
    virtual std::string toString()const;
    virtual void load(IDataInput &);
    virtual void equals(Tag const&)const;
    virtual void write(IDataOutput &)const;
    virtual void getId()const;
//  virtual void print(std::string const&, PrintStream &)const; //TODO: incomplete function definition
    void getByte(std::string const&)const;
    void putInt(std::string, int);
    void getShortTag(std::string const&);
    void getIntTag(std::string const&);
    void getInt(std::string const&)const;
    void getDoubleTag(std::string const&)const;
    void getCompound(std::string const&)const;
    void getBoolean(std::string const&)const;
    void getIntArrayTag(std::string const&)const;
    void getByteTag(std::string const&)const;
    std::string end()const;
    void putCompound(std::string, std::unique_ptr<CompoundTag>);
    void getInt64Tag(std::string const&)const;
    void getInt64Tag(std::string const&);
    void getString(std::string const&)const;
    void getShortTag(std::string const&)const;
    void get(std::string const&)const;
    void clear();
//  void contains(std::string const&, Tag::Type)const; //TODO: incomplete function definition
    void getStringTag(std::string const&);
    void getIntTag(std::string const&)const;
    void getByteTag(std::string const&);
    void putInt64(std::string, long);
    void get(std::string const&);
    void append(CompoundTag const&);
    void getIntArray(std::string const&)const;
    void getShort(std::string const&)const;
    void putString(std::string, std::string);
    void putByteArray(std::string, TagMemoryChunk);
    void deepCopy(CompoundTag const&);
    CompoundTag(CompoundTag &&);
    CompoundTag();
    void remove(std::string const&);
    void getInt64(std::string const&)const;
    std::string rawView()const;
    void putBoolean(std::string, bool);
    void putCompound(std::string, CompoundTag);
    void getList(std::string const&)const;
    void getFloat(std::string const&)const;
    void contains(std::string const&)const;
    void getByteArray(std::string const&)const;
    void getIntArrayTag(std::string const&);
    void put(std::string, Tag &&);
    std::string begin()const;
    void putDouble(std::string, double);
    void getCompound(std::string const&);
    void put(std::string, std::unique_ptr<Tag>);
    void rename(std::string const&, std::string);
    void getStringTag(std::string const&)const;
    void putShort(std::string, short);
    void getList(std::string const&);
    void getByteArrayTag(std::string const&);
    void getFloatTag(std::string const&)const;
    void getDouble(std::string const&)const;
    void getByteArrayTag(std::string const&)const;
    void putByte(std::string, unsigned char);
    void getDoubleTag(std::string const&);
    void clone()const;
    void putFloat(std::string, float);
    void getAllTags(std::vector<Tag *> &);
    bool isEmpty()const;
    void getFloatTag(std::string const&);
};
