#pragma once

class Tag {

public:
    virtual ~Tag();
    virtual void deleteChildren(void);
    virtual void equals(Tag const&)const;
    virtual void print(PrintStream &)const;
    virtual void print(std::string const&, PrintStream &)const;

    void Tag(Tag const&);
    void Tag(void);
    void readNamedTag(IDataInput &, std::string &);
    void newTag(Tag::Type);
    void writeNamedTag(std::string const&, Tag const&, IDataOutput &);
};
