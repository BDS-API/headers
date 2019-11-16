#pragma once

class ShortTag : Tag {

    virtual void Short~ShortTag();
    virtual void Short~ShortTag();
    virtual void deleteChildren(void);
    virtual void Shortwrite(IDataOutput &)const;
    virtual void Shortload(IDataInput &);
    virtual void _ZNK8ShortTag8toStringB5cxx11Ev;
    virtual void ShortgetId(void)const;
    virtual void Shortequals(Tag const&)const;
    virtual void print(PrintStream &)const;
    virtual void print(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, PrintStream &)const;
    virtual void Shortcopy(void)const;
    virtual void Shorthash(void)const;
}
