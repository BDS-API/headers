#pragma once

#include "../io/IDataInput"


class Tag {

public:
    static long NullString[abi:cxx11];

    virtual Tag::~Tag();
    virtual void deleteChildren(void);
    virtual void equals(Tag const&)const;
    virtual void print(PrintStream &)const;
    virtual void print(std::string const&, PrintStream &)const;

    Tag(Tag const&);
    Tag(void);
    void readNamedTag(IDataInput &, std::string &);
    void newTag(Tag::Type);
    void writeNamedTag(std::string const&, Tag const&, IDataOutput &);
};
