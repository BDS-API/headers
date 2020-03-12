#pragma once

#include <string>


class TextureAtlasItem {

public:
    ~TextureAtlasItem();
    void uvCount()const;
    void operator[](unsigned long)const;
    TextureAtlasItem(std::string const&, unsigned long);
    TextureAtlasItem();
    TextureAtlasItem(TextureAtlasItem &&);
    TextureAtlasItem(TextureAtlasItem const&);
};
