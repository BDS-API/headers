#pragma once

class ListTag : Tag {

    virtual void List~ListTag();
    virtual void List~ListTag();
    virtual void ListdeleteChildren(void);
    virtual void Listwrite(IDataOutput &)const;
    virtual void Listload(IDataInput &);
    virtual void _ZNK7ListTag8toStringB5cxx11Ev;
    virtual void ListgetId(void)const;
    virtual void Listequals(Tag const&)const;
    virtual void print(PrintStream &)const;
    virtual void Listprint(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, PrintStream &)const;
    virtual void Listcopy(void)const;
    virtual void Listhash(void)const;
}
