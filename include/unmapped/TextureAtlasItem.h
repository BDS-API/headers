#pragma once

#include <string>


class TextureAtlasItem {

public:
    TextureAtlasItem(); // _ZN16TextureAtlasItemC2Ev
    ~TextureAtlasItem(); // _ZN16TextureAtlasItemD2Ev
    void uvCount()const; // _ZNK16TextureAtlasItem7uvCountEv
    void operator[](unsigned long)const; // _ZNK16TextureAtlasItemixEm
    TextureAtlasItem(TextureAtlasItem const&); // _ZN16TextureAtlasItemC2ERKS_
    TextureAtlasItem(TextureAtlasItem &&); // _ZN16TextureAtlasItemC2EOS_
    TextureAtlasItem(std::string const&, unsigned long); // _ZN16TextureAtlasItemC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEm
};
