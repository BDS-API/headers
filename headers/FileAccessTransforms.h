#pragma once

class FileAccessTransforms {

    virtual ~FileAccessTransforms();
    virtual ~FileAccessTransforms();
    virtual void readTransform(std::vector<unsigned char, std::allocator<unsigned char>> &)const;
    virtual void writeTransform(std::vector<unsigned char, std::allocator<unsigned char>> &)const;
}
