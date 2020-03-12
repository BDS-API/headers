#pragma once

#include "ResourceLocation.h"


class TextureUVCoordinateSet {

public:
    TextureUVCoordinateSet(float, float, float, float, unsigned short, unsigned short, ResourceLocation, float);
    void inverseOffsetHeight(float, float)const;
    void pixelWidth()const;
    bool asPixelU0()const;
    ~TextureUVCoordinateSet();
    void inverseOffsetWidth(float, float)const;
    void pixelHeight()const;
    void pixelSizeU()const;
    void offsetWidth(float, float)const;
    bool asPixelV0()const;
    void fromOldSystem(int);
    void offsetWidthPixel(float, float)const;
    bool asPixelV1()const;
    void offsetHeight(float, float)const;
    void width()const;
    void height()const;
    void subTexture(float, float, int, int)const;
    void pixelSizeV()const;
    TextureUVCoordinateSet(TextureUVCoordinateSet const&);
    TextureUVCoordinateSet();
    void offsetHeightPixel(float, float)const;
    void offset(float)const;
    bool asPixelU1()const;
};
