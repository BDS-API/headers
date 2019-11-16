#pragma once

class ByteTag : Tag {

    virtual void Byte~ByteTag();
    virtual void Byte~ByteTag();
    virtual void deleteChildren(void);
    virtual void Bytewrite(IDataOutput &)const;
    virtual void Byteload(IDataInput &);
    virtual void _ZNK7ByteTag8toStringB5cxx11Ev;
    virtual void BytegetId(void)const;
    virtual void Byteequals(Tag const&)const;
    virtual void print(PrintStream &)const;
    virtual void print(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, PrintStream &)const;
    virtual void Bytecopy(void)const;
    virtual void Bytehash(void)const;
}
