#pragma once

#include "FileAccessTransforms.h"
#include <vector>
#include "IContentKeyProvider.h"


class EncryptedZipTransforms : FileAccessTransforms {

public:
    virtual void readTransform(std::vector<unsigned char> &)const;
    virtual void writeTransform(std::vector<unsigned char> &)const;
    ~EncryptedZipTransforms();
    EncryptedZipTransforms(IContentKeyProvider const&);
};
