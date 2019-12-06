#pragma once

class Tag {

public:
    virtual ~Tag();
    virtual void deleteChildren(void);
    virtual void equals(Tag const&)const;
    virtual void print(PrintStream &)const;
    virtual void print(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, PrintStream &)const;

    void Tag(Tag const&);
    void Tag(void);
    void readNamedTag(IDataInput &, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> &);
    void newTag(Tag::Type);
    void writeNamedTag(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, Tag const&, IDataOutput &);
};
