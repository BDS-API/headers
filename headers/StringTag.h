#pragma once

class StringTag : Tag {

    virtual void String~StringTag();
    virtual void String~StringTag();
    virtual void deleteChildren(void);
    virtual void Stringwrite(IDataOutput &)const;
    virtual void Stringload(IDataInput &);
    virtual void _ZNK9StringTag8toStringB5cxx11Ev;
    virtual void StringgetId(void)const;
    virtual void Stringequals(Tag const&)const;
    virtual void print(PrintStream &)const;
    virtual void print(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, PrintStream &)const;
    virtual void Stringcopy(void)const;
    virtual void Stringhash(void)const;
}
