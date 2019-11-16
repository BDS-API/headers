#pragma once

class Int64Tag : Tag {

    virtual void Int64~Int64Tag();
    virtual void Int64~Int64Tag();
    virtual void deleteChildren(void);
    virtual void Int64write(IDataOutput &)const;
    virtual void Int64load(IDataInput &);
    virtual void _ZNK8Int64Tag8toStringB5cxx11Ev;
    virtual void Int64getId(void)const;
    virtual void Int64equals(Tag const&)const;
    virtual void print(PrintStream &)const;
    virtual void print(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, PrintStream &)const;
    virtual void Int64copy(void)const;
    virtual void Int64hash(void)const;
}
