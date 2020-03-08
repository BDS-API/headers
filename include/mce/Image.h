#pragma once



using namespace mce;

class Image {

public:

    Image(void);
    Image(mce::Blob &&);
    Image(unsigned int, unsigned int, mce::ImageFormat, mce::ImageUsage);
    void setRawImage(mce::Blob &&);
    void setImageDescription(unsigned int, unsigned int, mce::ImageFormat, mce::ImageUsage);
    void resizeImageBytesToFitImageDescription();
    void copyRawImage(mce::Blob const&);
    void clone()const;
    bool isEmpty()const;
};
