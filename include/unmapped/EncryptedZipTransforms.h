#pragma once

#include "./FileAccessTransforms.h"
#include <memory>
#include "./IContentKeyProvider.h"
#include <vector>


class EncryptedZipTransforms : FileAccessTransforms {

public:
    virtual ~EncryptedZipTransforms();
    virtual void readTransform(std::vector<unsigned char, std::allocator<unsigned char>> &)const;
    virtual void writeTransform(std::vector<unsigned char, std::allocator<unsigned char>> &)const;

    EncryptedZipTransforms(IContentKeyProvider const&);
};
