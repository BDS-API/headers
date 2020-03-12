#pragma once

#include "FileAccessTransforms.h"
#include <vector>


class EncryptedZipTransforms : FileAccessTransforms {

public:
    virtual void writeTransform(std::vector<unsigned char> &)const;
    ~EncryptedZipTransforms();
    virtual void readTransform(std::vector<unsigned char> &)const;
    EncryptedZipTransforms(IContentKeyProvider const&);
};
