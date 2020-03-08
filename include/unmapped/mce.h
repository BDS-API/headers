#pragma once

#include "../mce/Degree"
#include "../mce/Radian"


class mce {

public:


    void numChannels(mce::ImageFormat);
    void strideFromImageFormat(mce::ImageFormat);
    void operator-(mce::Radian, float);
    void operator-(float, mce::Radian);
    void operator-(mce::Degree, float);
    void operator-(float, mce::Degree);
};
