#pragma once

#include "./TextureItem.h"


class TextureItem {

public:

    TextureItem();
    ~TextureItem();
    TextureItem(TextureItem const&);
    TextureItem(TextureItem &&);
};
