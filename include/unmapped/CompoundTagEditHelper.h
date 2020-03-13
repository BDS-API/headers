#pragma once

#include <string>
#include <memory>


class CompoundTagEditHelper {

public:
    CompoundTagEditHelper(Tag &); // _ZN21CompoundTagEditHelperC2ER3Tag
    void replaceWith(std::string const&, std::unique_ptr<Tag>); // _ZN21CompoundTagEditHelper11replaceWithERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt10unique_ptrI3TagSt14default_deleteIS9_EE
    void pushChild(std::string const&); // _ZN21CompoundTagEditHelper9pushChildERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    void popChild(); // _ZN21CompoundTagEditHelper8popChildEv
    bool canPopChild(); // _ZN21CompoundTagEditHelper11canPopChildEv
    void getParent()const; // _ZNK21CompoundTagEditHelper9getParentEv
    ~CompoundTagEditHelper(); // _ZN21CompoundTagEditHelperD2Ev
};
