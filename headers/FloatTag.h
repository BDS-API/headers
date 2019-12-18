#pragma once

class FloatTag : Tag {

public:
    virtual ~FloatTag();
    virtual void write(IDataOutput &)const;
    virtual void load(IDataInput &);
    virtual void toString[abi:cxx11](void)const;
    virtual void getId(void)const;
    virtual void equals(Tag const&)const;
    virtual void copy(void)const;
    virtual void hash(void)const;

    void FloatTag(FloatTag&&);
    void FloatTag(void);
    void FloatTag(float);
};
