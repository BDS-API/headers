#pragma once

#include <vector>


class FileAccessTransforms {

public:
    virtual void writeTransform(std::vector<unsigned char> &)const;
    virtual void readTransform(std::vector<unsigned char> &)const;
    ~FileAccessTransforms();
    FileAccessTransforms();
};
