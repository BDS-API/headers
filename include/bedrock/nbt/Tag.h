#pragma once

#include <string>


class Tag {

public:
    static std::string NullString;

    virtual void equals(Tag const&)const;
//  virtual void print(std::string const&, PrintStream &)const; //TODO: incomplete function definition
    virtual void deleteChildren();
//  virtual void print(PrintStream &)const; //TODO: incomplete function definition
    ~Tag();
//  std::string getTagName(Tag::Type); //TODO: incomplete function definition
    Tag();
    Tag(Tag const&);
//  void newTag(Tag::Type); //TODO: incomplete function definition
    void writeNamedTag(std::string const&, Tag const&, IDataOutput &);
    void readNamedTag(IDataInput &, std::string &);
};
