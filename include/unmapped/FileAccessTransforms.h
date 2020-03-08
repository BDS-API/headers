#pragma once



class FileAccessTransforms {

public:
    virtual FileAccessTransforms::~FileAccessTransforms()
    virtual void readTransform(std::vector<unsigned char, std::allocator<unsigned char>> &)const;
    virtual void writeTransform(std::vector<unsigned char, std::allocator<unsigned char>> &)const;

    FileAccessTransforms(void);
};
