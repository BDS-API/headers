#pragma once

#include "ResourceLocation.h"


class TextureUVCoordinateSet {

public:
    TextureUVCoordinateSet(TextureUVCoordinateSet const&); // _ZN22TextureUVCoordinateSetC2ERKS_
    ~TextureUVCoordinateSet(); // _ZN22TextureUVCoordinateSetD2Ev
    TextureUVCoordinateSet(float, float, float, float, unsigned short, unsigned short, ResourceLocation, float); // _ZN22TextureUVCoordinateSetC2Efffftt16ResourceLocationf
    TextureUVCoordinateSet(); // _ZN22TextureUVCoordinateSetC2Ev
    void offsetWidth(float, float)const; // _ZNK22TextureUVCoordinateSet11offsetWidthEff
    void offsetHeight(float, float)const; // _ZNK22TextureUVCoordinateSet12offsetHeightEff
    void offsetWidthPixel(float, float)const; // _ZNK22TextureUVCoordinateSet16offsetWidthPixelEff
    void offsetHeightPixel(float, float)const; // _ZNK22TextureUVCoordinateSet17offsetHeightPixelEff
    void inverseOffsetWidth(float, float)const; // _ZNK22TextureUVCoordinateSet18inverseOffsetWidthEff
    void inverseOffsetHeight(float, float)const; // _ZNK22TextureUVCoordinateSet19inverseOffsetHeightEff
    void offset(float)const; // _ZNK22TextureUVCoordinateSet6offsetEf
    void subTexture(float, float, int, int)const; // _ZNK22TextureUVCoordinateSet10subTextureEffii
    void fromOldSystem(int); // _ZN22TextureUVCoordinateSet13fromOldSystemEi
    void width()const; // _ZNK22TextureUVCoordinateSet5widthEv
    void height()const; // _ZNK22TextureUVCoordinateSet6heightEv
    void pixelWidth()const; // _ZNK22TextureUVCoordinateSet10pixelWidthEv
    void pixelHeight()const; // _ZNK22TextureUVCoordinateSet11pixelHeightEv
    void pixelSizeU()const; // _ZNK22TextureUVCoordinateSet10pixelSizeUEv
    void pixelSizeV()const; // _ZNK22TextureUVCoordinateSet10pixelSizeVEv
    bool asPixelU1()const; // _ZNK22TextureUVCoordinateSet9asPixelU1Ev
    bool asPixelU0()const; // _ZNK22TextureUVCoordinateSet9asPixelU0Ev
    bool asPixelV1()const; // _ZNK22TextureUVCoordinateSet9asPixelV1Ev
    bool asPixelV0()const; // _ZNK22TextureUVCoordinateSet9asPixelV0Ev
};
