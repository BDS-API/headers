#pragma once



class TextureItem {

public:
    TextureItem(TextureItem &&);
    ~TextureItem();
    TextureItem(TextureItem const&);
    TextureItem();
};
