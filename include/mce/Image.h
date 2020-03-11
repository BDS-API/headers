#pragma once

#include "./Blob.h"


namespace mce {

class Image {

public:

    ~Image();
    Image();
    Image(mce::Blob &&);
//  Image(unsigned int, unsigned int, mce::ImageFormat, mce::ImageUsage); //TODO: incomplete function definition
    void setRawImage(mce::Blob &&);
//  void setImageDescription(unsigned int, unsigned int, mce::ImageFormat, mce::ImageUsage); //TODO: incomplete function definition
    void resizeImageBytesToFitImageDescription();
    void copyRawImage(mce::Blob const&);
    void clone()const;
    bool isEmpty()const;
};

}