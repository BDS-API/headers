#pragma once

class ByteArrayTag : Tag {

public:
    virtual ~ByteArrayTag();
    virtual void write(IDataOutput &)const;
    virtual void load(IDataInput &);
    virtual void getId(void)const;
    virtual void equals(Tag const&)const;
    virtual void copy(void)const;
    virtual void hash(void)const;

    void ByteArrayTag(ByteArrayTag&&);
    void ByteArrayTag(void);
    void ByteArrayTag(TagMemoryChunk);
};
