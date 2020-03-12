#pragma once



class TextureItem {

public:
    TextureItem(TextureItem const&);
    TextureItem();
    ~TextureItem();
    TextureItem(TextureItem &&);
};
