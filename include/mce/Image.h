#pragma once

#include "Blob.h"


namespace mce {

    class Image {

    public:
        Image();
        void resizeImageBytesToFitImageDescription();
        ~Image();
        void setRawImage(mce::Blob &&);
        bool isEmpty()const;
//      Image(unsigned int, unsigned int, mce::ImageFormat, mce::ImageUsage); //TODO: incomplete function definition
//      void setImageDescription(unsigned int, unsigned int, mce::ImageFormat, mce::ImageUsage); //TODO: incomplete function definition
        void copyRawImage(mce::Blob const&);
        void clone()const;
        Image(mce::Blob &&);
    };
}
