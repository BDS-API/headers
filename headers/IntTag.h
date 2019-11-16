#pragma once

class IntTag : Tag {

    virtual void Int~IntTag();
    virtual void Int~IntTag();
    virtual void deleteChildren(void);
    virtual void Intwrite(IDataOutput &)const;
    virtual void Intload(IDataInput &);
    virtual void _ZNK6IntTag8toStringB5cxx11Ev;
    virtual void IntgetId(void)const;
    virtual void Intequals(Tag const&)const;
    virtual void print(PrintStream &)const;
    virtual void print(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, PrintStream &)const;
    virtual void Intcopy(void)const;
    virtual void Inthash(void)const;
}
