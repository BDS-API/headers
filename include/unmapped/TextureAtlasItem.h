#pragma once

#include "./TextureAtlasItem.h"
#include <string>


class TextureAtlasItem {

public:

    TextureAtlasItem();
    ~TextureAtlasItem();
    void uvCount()const;
    void operator[](unsigned long)const;
    TextureAtlasItem(TextureAtlasItem const&);
    TextureAtlasItem(TextureAtlasItem &&);
    TextureAtlasItem(std::string const&, unsigned long);
};
