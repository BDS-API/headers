#pragma once

#include <memory>
#include "Tag.h"
#include <vector>
#include "../../unmapped/TagMemoryChunk.h"
#include <string>


class CompoundTag : Tag {

public:
    virtual void copy()const;
    virtual void write(IDataOutput &)const;
    virtual void equals(Tag const&)const;
//  virtual void print(std::string const&, PrintStream &)const; //TODO: incomplete function definition
    virtual void hash()const;
    ~CompoundTag();
    virtual void load(IDataInput &);
    virtual std::string toString()const;
    virtual void getId()const;
    void putByte(std::string, unsigned char);
    void getByteArrayTag(std::string const&);
    void getInt(std::string const&)const;
    void putBoolean(std::string, bool);
    void getString(std::string const&)const;
    void get(std::string const&)const;
    void deepCopy(CompoundTag const&);
    void getByteArray(std::string const&)const;
    void getShort(std::string const&)const;
    void get(std::string const&);
    void getByteArrayTag(std::string const&)const;
    void putInt(std::string, int);
//  void contains(std::string const&, Tag::Type)const; //TODO: incomplete function definition
    std::string end()const;
    void getFloat(std::string const&)const;
    void putDouble(std::string, double);
    void putByteArray(std::string, TagMemoryChunk);
    void getInt64Tag(std::string const&);
    void getList(std::string const&)const;
    void getIntArrayTag(std::string const&);
    void getIntArrayTag(std::string const&)const;
    void getList(std::string const&);
    void getFloatTag(std::string const&);
    void getStringTag(std::string const&);
    void putFloat(std::string, float);
    void getShortTag(std::string const&);
    void getIntArray(std::string const&)const;
    CompoundTag(CompoundTag &&);
    void getCompound(std::string const&);
    void getBoolean(std::string const&)const;
    void getCompound(std::string const&)const;
    void append(CompoundTag const&);
    void getDoubleTag(std::string const&);
    void getByte(std::string const&)const;
    void getDouble(std::string const&)const;
    std::string rawView()const;
    void put(std::string, Tag &&);
    void remove(std::string const&);
    void contains(std::string const&)const;
    void putCompound(std::string, CompoundTag);
    void getInt64(std::string const&)const;
    void putCompound(std::string, std::unique_ptr<CompoundTag>);
    void clone()const;
    void getAllTags(std::vector<Tag *> &);
    void getShortTag(std::string const&)const;
    std::string begin()const;
    void getIntTag(std::string const&);
    void getIntTag(std::string const&)const;
    void getInt64Tag(std::string const&)const;
    void putShort(std::string, short);
    void getByteTag(std::string const&)const;
    bool isEmpty()const;
    void getFloatTag(std::string const&)const;
    void rename(std::string const&, std::string);
    void getByteTag(std::string const&);
    void clear();
    void putString(std::string, std::string);
    void getStringTag(std::string const&)const;
    void putInt64(std::string, long);
    void getDoubleTag(std::string const&)const;
    CompoundTag();
    void put(std::string, std::unique_ptr<Tag>);
};
