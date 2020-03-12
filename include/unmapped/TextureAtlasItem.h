#pragma once

#include <string>


class TextureAtlasItem {

public:
    TextureAtlasItem(std::string const&, unsigned long);
    TextureAtlasItem();
    ~TextureAtlasItem();
    void uvCount()const;
    void operator[](unsigned long)const;
    TextureAtlasItem(TextureAtlasItem const&);
    TextureAtlasItem(TextureAtlasItem &&);
};
