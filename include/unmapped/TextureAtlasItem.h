#pragma once



class TextureAtlasItem {

public:

    TextureAtlasItem(void);
    void uvCount()const;
    TextureAtlasItem(TextureAtlasItem const&);
    TextureAtlasItem(TextureAtlasItem&&);
    TextureAtlasItem(std::string const&, unsigned long);
};
