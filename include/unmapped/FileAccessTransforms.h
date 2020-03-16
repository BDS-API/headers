#pragma once

#include <vector>


class FileAccessTransforms {

public:
    virtual ~FileAccessTransforms(); // _ZN20FileAccessTransformsD2Ev
    virtual void __fake_function0(); // fake
    virtual void readTransform(std::vector<unsigned char> &)const; // _ZNK20FileAccessTransforms13readTransformERSt6vectorIhSaIhEE
    virtual void writeTransform(std::vector<unsigned char> &)const; // _ZNK20FileAccessTransforms14writeTransformERSt6vectorIhSaIhEE
    FileAccessTransforms(); // _ZN20FileAccessTransformsC2Ev
};
