#pragma once

class CompoundTag : Tag {

    virtual void Compound~CompoundTag();
    virtual void Compound~CompoundTag();
    virtual void deleteChildren(void);
    virtual void Compoundwrite(IDataOutput &)const;
    virtual void Compoundload(IDataInput &);
    virtual void _ZNK11CompoundTag8toStringB5cxx11Ev;
    virtual void CompoundgetId(void)const;
    virtual void Compoundequals(Tag const&)const;
    virtual void print(PrintStream &)const;
    virtual void Compoundprint(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, PrintStream &)const;
    virtual void Compoundcopy(void)const;
    virtual void Compoundhash(void)const;
}
