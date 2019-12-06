#pragma once

class mce::Image {

public:

    void Image(void);
    void Image(mce::Blob &&);
    void Image(unsigned int, unsigned int, mce::ImageFormat, mce::ImageUsage);
    void setRawImage(mce::Blob &&);
    void setImageDescription(unsigned int, unsigned int, mce::ImageFormat, mce::ImageUsage);
    void resizeImageBytesToFitImageDescription(void);
    void copyRawImage(mce::Blob const&);
    void clone(void)const;
    bool isEmpty(void)const;
};
