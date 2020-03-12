#pragma once

#include "ResourceLocation.h"


class TextureUVCoordinateSet {

public:
    void offsetWidthPixel(float, float)const;
    ~TextureUVCoordinateSet();
    void subTexture(float, float, int, int)const;
    void pixelWidth()const;
    bool asPixelU1()const;
    void offset(float)const;
    TextureUVCoordinateSet(TextureUVCoordinateSet const&);
    void width()const;
    void pixelHeight()const;
    bool asPixelV0()const;
    TextureUVCoordinateSet();
    TextureUVCoordinateSet(float, float, float, float, unsigned short, unsigned short, ResourceLocation, float);
    void pixelSizeU()const;
    void fromOldSystem(int);
    void inverseOffsetHeight(float, float)const;
    bool asPixelV1()const;
    bool asPixelU0()const;
    void inverseOffsetWidth(float, float)const;
    void offsetHeightPixel(float, float)const;
    void offsetHeight(float, float)const;
    void pixelSizeV()const;
    void height()const;
    void offsetWidth(float, float)const;
};
