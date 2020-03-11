#pragma once

#include "./ResourceLocation.h"
#include "./TextureUVCoordinateSet.h"


class TextureUVCoordinateSet {

public:

    TextureUVCoordinateSet(TextureUVCoordinateSet const&);
    ~TextureUVCoordinateSet();
    TextureUVCoordinateSet(float, float, float, float, unsigned short, unsigned short, ResourceLocation, float);
    TextureUVCoordinateSet();
    void offsetWidth(float, float)const;
    void offsetHeight(float, float)const;
    void offsetWidthPixel(float, float)const;
    void offsetHeightPixel(float, float)const;
    void inverseOffsetWidth(float, float)const;
    void inverseOffsetHeight(float, float)const;
    void offset(float)const;
    void subTexture(float, float, int, int)const;
    void fromOldSystem(int);
    void width()const;
    void height()const;
    void pixelWidth()const;
    void pixelHeight()const;
    void pixelSizeU()const;
    void pixelSizeV()const;
    bool asPixelU1()const;
    bool asPixelU0()const;
    bool asPixelV1()const;
    bool asPixelV0()const;
};
