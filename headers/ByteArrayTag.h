#pragma once

class ByteArrayTag : Tag {

    virtual void ByteArray~ByteArrayTag();
    virtual void ByteArray~ByteArrayTag();
    virtual void deleteChildren(void);
    virtual void ByteArraywrite(IDataOutput &)const;
    virtual void ByteArrayload(IDataInput &);
    virtual void _ZNK12ByteArrayTag8toStringB5cxx11Ev;
    virtual void ByteArraygetId(void)const;
    virtual void ByteArrayequals(Tag const&)const;
    virtual void print(PrintStream &)const;
    virtual void print(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, PrintStream &)const;
    virtual void ByteArraycopy(void)const;
    virtual void ByteArrayhash(void)const;
}
