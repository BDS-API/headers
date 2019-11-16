#pragma once

class EndTag : Tag {

    virtual void End~EndTag();
    virtual void End~EndTag();
    virtual void deleteChildren(void);
    virtual void Endwrite(IDataOutput &)const;
    virtual void Endload(IDataInput &);
    virtual void _ZNK6EndTag8toStringB5cxx11Ev;
    virtual void EndgetId(void)const;
    virtual void Endequals(Tag const&)const;
    virtual void print(PrintStream &)const;
    virtual void print(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, PrintStream &)const;
    virtual void Endcopy(void)const;
    virtual void Endhash(void)const;
}
