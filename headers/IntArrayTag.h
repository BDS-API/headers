#pragma once

class IntArrayTag : Tag {

public:
    virtual ~IntArrayTag();
    virtual void write(IDataOutput &)const;
    virtual void load(IDataInput &);
    virtual void getId(void)const;
    virtual void equals(Tag const&)const;
    virtual void copy(void)const;
    virtual void hash(void)const;

    void IntArrayTag(IntArrayTag&&);
    void IntArrayTag(void);
    void IntArrayTag(TagMemoryChunk);
};
