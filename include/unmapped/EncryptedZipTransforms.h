#pragma once

#include "FileAccessTransforms.h"
#include <vector>


class EncryptedZipTransforms : FileAccessTransforms {

public:
    ~EncryptedZipTransforms(); // _ZN22EncryptedZipTransformsD2Ev
    virtual void readTransform(std::vector<unsigned char> &)const; // _ZNK22EncryptedZipTransforms13readTransformERSt6vectorIhSaIhEE
    virtual void writeTransform(std::vector<unsigned char> &)const; // _ZNK22EncryptedZipTransforms14writeTransformERSt6vectorIhSaIhEE
    EncryptedZipTransforms(IContentKeyProvider const&); // _ZN22EncryptedZipTransformsC2ERK19IContentKeyProvider
};
