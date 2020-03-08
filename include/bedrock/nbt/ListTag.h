#pragma once

#include "../io/IDataInput"
#include "../io/IDataOutput"


class ListTag : Tag {

public:
    virtual ListTag::~ListTag()
    virtual void deleteChildren();
    virtual void write(IDataOutput &)const;
    virtual void load(IDataInput &);
    virtual void toString()const;
    virtual void getId()const;
    virtual void equals(Tag const&)const;
    virtual void print(std::string const&, PrintStream &)const;
    virtual void copy()const;
    virtual void hash()const;

    ListTag(ListTag&&);
    ListTag(void);
    void add(std::unique_ptr<Tag, std::default_delete<Tag>>);
    void get(int)const;
    void size()const;
    void getFloat(int)const;
    void getInt(int)const;
    void getDouble(int)const;
    void getCompound(unsigned long)const;
};
