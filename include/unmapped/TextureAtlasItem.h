#pragma once

class TextureAtlasItem {

public:

    TextureAtlasItem(void);
    void uvCount(void)const;
    TextureAtlasItem(TextureAtlasItem const&);
    TextureAtlasItem(TextureAtlasItem&&);
    TextureAtlasItem(std::string const&, unsigned long);
};
