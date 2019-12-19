#pragma once

class ShortTag : Tag {

public:
    virtual ShortTag::~ShortTag();
    virtual void write(IDataOutput &)const;
    virtual void load(IDataInput &);
    virtual void toString[abi:cxx11](void)const;
    virtual void getId(void)const;
    virtual void equals(Tag const&)const;
    virtual void copy(void)const;
    virtual void hash(void)const;

    ShortTag(ShortTag&&);
    ShortTag(void);
    ShortTag(short);
};
