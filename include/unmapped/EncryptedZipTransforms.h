#pragma once



class EncryptedZipTransforms : FileAccessTransforms {

public:
    virtual EncryptedZipTransforms::~EncryptedZipTransforms()
    virtual void readTransform(std::vector<unsigned char, std::allocator<unsigned char>> &)const;
    virtual void writeTransform(std::vector<unsigned char, std::allocator<unsigned char>> &)const;

    EncryptedZipTransforms(IContentKeyProvider const&);
};
