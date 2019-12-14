#pragma once

class TextureAtlasItem {

public:

    void TextureAtlasItem(void);
    void uvCount(void)const;
    void TextureAtlasItem(TextureAtlasItem const&);
    void TextureAtlasItem(TextureAtlasItem&&);
    void TextureAtlasItem(std::string const&, unsigned long);
};
