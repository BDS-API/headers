#pragma once



namespace mce {

    class Image {

    public:
        ~Image(); // _ZN3mce5ImageD2Ev
        Image(); // _ZN3mce5ImageC2Ev
        Image(mce::Blob &&); // _ZN3mce5ImageC2EONS_4BlobE
//      Image(unsigned int, unsigned int, mce::ImageFormat, mce::ImageUsage); //TODO: incomplete function definition // _ZN3mce5ImageC2EjjNS_11ImageFormatENS_10ImageUsageE
        void setRawImage(mce::Blob &&); // _ZN3mce5Image11setRawImageEONS_4BlobE
//      void setImageDescription(unsigned int, unsigned int, mce::ImageFormat, mce::ImageUsage); //TODO: incomplete function definition // _ZN3mce5Image19setImageDescriptionEjjNS_11ImageFormatENS_10ImageUsageE
        void resizeImageBytesToFitImageDescription(); // _ZN3mce5Image37resizeImageBytesToFitImageDescriptionEv
        void copyRawImage(mce::Blob const&); // _ZN3mce5Image12copyRawImageERKNS_4BlobE
        void clone()const; // _ZNK3mce5Image5cloneEv
        bool isEmpty()const; // _ZNK3mce5Image7isEmptyEv
    };
}
