#pragma once

class TextureUVCoordinateSet {

public:

    void TextureUVCoordinateSet(TextureUVCoordinateSet const&);
    void TextureUVCoordinateSet(float, float, float, float, unsigned short, unsigned short, ResourceLocation, float);
    void TextureUVCoordinateSet(void);
    void offsetWidth(float, float)const;
    void offsetHeight(float, float)const;
    void offsetWidthPixel(float, float)const;
    void offsetHeightPixel(float, float)const;
    void inverseOffsetWidth(float, float)const;
    void inverseOffsetHeight(float, float)const;
    void offset(float)const;
    void subTexture(float, float, int, int)const;
    void fromOldSystem(int);
    void width(void)const;
    void height(void)const;
    void pixelWidth(void)const;
    void pixelHeight(void)const;
    void pixelSizeU(void)const;
    void pixelSizeV(void)const;
    void asPixelU1(void)const;
    void asPixelU0(void)const;
    void asPixelV1(void)const;
    void asPixelV0(void)const;
};
