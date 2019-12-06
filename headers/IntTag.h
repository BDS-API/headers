#pragma once

class IntTag : Tag {

public:
    virtual ~IntTag();
    virtual void write(IDataOutput &)const;
    virtual void load(IDataInput &);
    virtual void getId(void)const;
    virtual void equals(Tag const&)const;
    virtual void copy(void)const;
    virtual void hash(void)const;

    void IntTag(IntTag&&);
    void IntTag(void);
    void IntTag(int);
};
