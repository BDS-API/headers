#pragma once

#include <string>
#include "../io/IDataInput.h"
#include "../io/IDataOutput.h"


class Tag {

public:
    static std::string NullString;

//  virtual void print(PrintStream &)const; //TODO: incomplete function definition
    ~Tag();
//  virtual void print(std::string const&, PrintStream &)const; //TODO: incomplete function definition
    virtual void deleteChildren();
    virtual void equals(Tag const&)const;
//  void newTag(Tag::Type); //TODO: incomplete function definition
    void readNamedTag(IDataInput &, std::string &);
//  std::string getTagName(Tag::Type); //TODO: incomplete function definition
    void writeNamedTag(std::string const&, Tag const&, IDataOutput &);
    Tag();
    Tag(Tag const&);
};
