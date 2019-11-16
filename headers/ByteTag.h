#pragma once

class ByteTag : Tag {

    virtual ~ByteTag();
    virtual ~ByteTag();
    virtual void deleteChildren(void);
    virtual void write(IDataOutput &)const;
    virtual void load(IDataInput &);
    virtual void _ZNK7ByteTag8toStringB5cxx11Ev;
    virtual void getId(void)const;
    virtual void equals(Tag const&)const;
    virtual void print(PrintStream &)const;
    virtual void print(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, PrintStream &)const;
    virtual void copy(void)const;
    virtual void hash(void)const;
}
