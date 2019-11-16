#pragma once

class DoubleTag : Tag {

    virtual void Double~DoubleTag();
    virtual void Double~DoubleTag();
    virtual void deleteChildren(void);
    virtual void Doublewrite(IDataOutput &)const;
    virtual void Doubleload(IDataInput &);
    virtual void _ZNK9DoubleTag8toStringB5cxx11Ev;
    virtual void DoublegetId(void)const;
    virtual void Doubleequals(Tag const&)const;
    virtual void print(PrintStream &)const;
    virtual void print(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, PrintStream &)const;
    virtual void Doublecopy(void)const;
    virtual void Doublehash(void)const;
}
