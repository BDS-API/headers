#pragma once

#include <memory>
#include <vector>


class FileAccessTransforms {

public:
    virtual ~FileAccessTransforms();
    virtual void readTransform(std::vector<unsigned char, std::allocator<unsigned char>> &)const;
    virtual void writeTransform(std::vector<unsigned char, std::allocator<unsigned char>> &)const;

    FileAccessTransforms();
};
