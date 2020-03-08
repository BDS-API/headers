#pragma once



class TextureUVCoordinateSet {

public:

    TextureUVCoordinateSet(TextureUVCoordinateSet const&);
    TextureUVCoordinateSet(float, float, float, float, unsigned short, unsigned short, ResourceLocation, float);
    TextureUVCoordinateSet(void);
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
    bool asPixelU1(void)const;
    bool asPixelU0(void)const;
    bool asPixelV1(void)const;
    bool asPixelV0(void)const;
};
