#pragma once

#include <string>


class Tag {

public:
    static std::string NullString;

    ~Tag(); // _ZN3TagD2Ev
    virtual void deleteChildren(); // _ZN3Tag14deleteChildrenEv
    virtual void equals(Tag const&)const; // _ZNK3Tag6equalsERKS_
//  virtual void print(PrintStream &)const; //TODO: incomplete function definition // _ZNK3Tag5printER11PrintStream
//  virtual void print(std::string const&, PrintStream &)const; //TODO: incomplete function definition // _ZNK3Tag5printERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEER11PrintStream
    Tag(Tag const&); // _ZN3TagC2ERKS_
    Tag(); // _ZN3TagC2Ev
//  std::string getTagName(Tag::Type); //TODO: incomplete function definition // _ZN3Tag10getTagNameB5cxx11ENS_4TypeE
    void readNamedTag(IDataInput &, std::string &); // _ZN3Tag12readNamedTagER10IDataInputRNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
//  void newTag(Tag::Type); //TODO: incomplete function definition // _ZN3Tag6newTagENS_4TypeE
    void writeNamedTag(std::string const&, Tag const&, IDataOutput &); // _ZN3Tag13writeNamedTagERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERKS_R11IDataOutput
};
