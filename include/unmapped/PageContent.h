#pragma once

#include <string>


class PageContent {

public:
    static long BLANK_PAGE;

    ~PageContent(); // _ZN11PageContentD2Ev
    PageContent(std::string); // _ZN11PageContentC2ENSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    PageContent(); // _ZN11PageContentC2Ev
    PageContent(PageContent &&); // _ZN11PageContentC2EOS_
    void read(CompoundTag const&); // _ZN11PageContent4readERK11CompoundTag
    void write(PageContent const&, CompoundTag &); // _ZN11PageContent5writeERKS_R11CompoundTag
    void createTag()const; // _ZNK11PageContent9createTagEv
    void getType()const; // _ZNK11PageContent7getTypeEv
};
