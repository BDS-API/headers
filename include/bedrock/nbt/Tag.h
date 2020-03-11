#pragma once

#include "../io/IDataOutput.h"
#include "./Tag.h"
#include "../io/IDataInput.h"
#include <string>


class Tag {

public:
    static std::string NullString;

    virtual ~Tag();
    virtual void deleteChildren();
    virtual void equals(Tag const&)const;
//  virtual void print(PrintStream &)const; //TODO: incomplete function definition
//  virtual void print(std::string const&, PrintStream &)const; //TODO: incomplete function definition

    Tag(Tag const&);
    Tag();
//  std::string getTagName(Tag::Type); //TODO: incomplete function definition
    void readNamedTag(IDataInput &, std::string &);
//  void newTag(Tag::Type); //TODO: incomplete function definition
    void writeNamedTag(std::string const&, Tag const&, IDataOutput &);
};
