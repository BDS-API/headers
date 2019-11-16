#pragma once

class FloatTag : Tag {

    virtual void Float~FloatTag();
    virtual void Float~FloatTag();
    virtual void deleteChildren(void);
    virtual void Floatwrite(IDataOutput &)const;
    virtual void Floatload(IDataInput &);
    virtual void _ZNK8FloatTag8toStringB5cxx11Ev;
    virtual void FloatgetId(void)const;
    virtual void Floatequals(Tag const&)const;
    virtual void print(PrintStream &)const;
    virtual void print(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, PrintStream &)const;
    virtual void Floatcopy(void)const;
    virtual void Floathash(void)const;
}
