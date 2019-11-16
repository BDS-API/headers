#pragma once

class EncryptedZipTransforms : FileAccessTransforms {

    virtual ~EncryptedZipTransforms();
    virtual ~EncryptedZipTransforms();
    virtual void readTransform(std::vector<unsigned char, std::allocator<unsigned char>> &)const;
    virtual void writeTransform(std::vector<unsigned char, std::allocator<unsigned char>> &)const;
}
