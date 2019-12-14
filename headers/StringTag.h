#pragma once

class StringTag : Tag {

public:
    virtual ~StringTag();
    virtual void write(IDataOutput &)const;
    virtual void load(IDataInput &);
    virtual void getId(void)const;
    virtual void equals(Tag const&)const;
    virtual void copy(void)const;
    virtual void hash(void)const;

    void StringTag(StringTag&&);
    void StringTag(void);
    void StringTag(std::string);
};
