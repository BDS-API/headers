#pragma once

class ByteTag : Tag {

public:
    virtual ~ByteTag();
    virtual void write(IDataOutput &)const;
    virtual void load(IDataInput &);
    virtual void getId(void)const;
    virtual void equals(Tag const&)const;
    virtual void copy(void)const;
    virtual void hash(void)const;

    void ByteTag(ByteTag&&);
    void ByteTag(void);
    void ByteTag(unsigned char);
};
