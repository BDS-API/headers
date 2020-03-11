#pragma once

#include "../io/IDataInput.h"
#include "./CompoundTag.h"
#include "../io/IDataOutput.h"
#include <memory>
#include "./Tag.h"
#include <vector>
#include "../../unmapped/TagMemoryChunk.h"
#include <string>


class CompoundTag : Tag {

public:
    virtual ~CompoundTag();
    virtual void write(IDataOutput &)const;
    virtual void load(IDataInput &);
    virtual std::string toString()const;
    virtual void getId()const;
    virtual void equals(Tag const&)const;
//  virtual void print(std::string const&, PrintStream &)const; //TODO: incomplete function definition
    virtual void copy()const;
    virtual void hash()const;

    CompoundTag();
    CompoundTag(CompoundTag &&);
    void put(std::string, std::unique_ptr<Tag, std::default_delete<Tag>>);
    void getAllTags(std::vector<Tag *, std::allocator<Tag *>> &);
    void put(std::string, Tag &&);
    void putByte(std::string, unsigned char);
    void putShort(std::string, short);
    void putInt(std::string, int);
    void putInt64(std::string, long);
    void putFloat(std::string, float);
    void putDouble(std::string, double);
    void putString(std::string, std::string);
    void putByteArray(std::string, TagMemoryChunk);
    void putCompound(std::string, CompoundTag);
    void putCompound(std::string, std::unique_ptr<CompoundTag, std::default_delete<CompoundTag>>);
    void putBoolean(std::string, bool);
    void append(CompoundTag const&);
    void contains(std::string const&)const;
    void get(std::string const&)const;
//  void contains(std::string const&, Tag::Type)const; //TODO: incomplete function definition
    void get(std::string const&);
    void getByteTag(std::string const&)const;
    void getByteTag(std::string const&);
    void getByte(std::string const&)const;
    void getShortTag(std::string const&)const;
    void getShortTag(std::string const&);
    void getShort(std::string const&)const;
    void getIntTag(std::string const&)const;
    void getIntTag(std::string const&);
    void getInt(std::string const&)const;
    void getInt64Tag(std::string const&)const;
    void getInt64Tag(std::string const&);
    void getInt64(std::string const&)const;
    void getFloatTag(std::string const&)const;
    void getFloatTag(std::string const&);
    void getFloat(std::string const&)const;
    void getDoubleTag(std::string const&)const;
    void getDoubleTag(std::string const&);
    void getDouble(std::string const&)const;
    void getStringTag(std::string const&)const;
    void getStringTag(std::string const&);
    void getString(std::string const&)const;
    void getByteArrayTag(std::string const&)const;
    void getByteArrayTag(std::string const&);
    void getByteArray(std::string const&)const;
    void getIntArrayTag(std::string const&)const;
    void getIntArrayTag(std::string const&);
    void getIntArray(std::string const&)const;
    void getCompound(std::string const&)const;
    void getCompound(std::string const&);
    void getList(std::string const&)const;
    void getList(std::string const&);
    void getBoolean(std::string const&)const;
    bool isEmpty()const;
    void clear();
    void clone()const;
    void deepCopy(CompoundTag const&);
    std::string rawView()const;
    void rename(std::string const&, std::string);
    void remove(std::string const&);
    std::string begin()const;
    std::string end()const;
};
