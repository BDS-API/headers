#pragma once

class Int64Tag : Tag {

public:
    virtual ~Int64Tag();
    virtual void write(IDataOutput &)const;
    virtual void load(IDataInput &);
    virtual void toString[abi:cxx11](void)const;
    virtual void getId(void)const;
    virtual void equals(Tag const&)const;
    virtual void copy(void)const;
    virtual void hash(void)const;

    void Int64Tag(Int64Tag&&);
    void Int64Tag(void);
    void Int64Tag(long);
};
