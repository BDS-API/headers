#pragma once



namespace mce {

    class Image {

    public:
        ~Image();
        void copyRawImage(mce::Blob const&);
        void clone()const;
        Image();
//      Image(unsigned int, unsigned int, mce::ImageFormat, mce::ImageUsage); //TODO: incomplete function definition
        void setRawImage(mce::Blob &&);
//      void setImageDescription(unsigned int, unsigned int, mce::ImageFormat, mce::ImageUsage); //TODO: incomplete function definition
        void resizeImageBytesToFitImageDescription();
        Image(mce::Blob &&);
        bool isEmpty()const;
    };
}
