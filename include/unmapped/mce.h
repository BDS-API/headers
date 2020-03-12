#pragma once

#include "../mce/Radian.h"
#include "../mce/Degree.h"


namespace mce {

    void operator<=(mce::Degree, float);
    void operator+(mce::Radian, float);
    void operator<=(mce::Radian, float);
    void operator>=(float, mce::Degree);
    void operator==(mce::Radian, float);
    void operator>(float, mce::Radian);
    void operator<=(float, mce::Radian);
    void operator<(float, mce::Degree);
    void operator>(mce::Radian, float);
    void operator==(mce::Degree, float);
    void operator/(float, mce::Degree);
    void operator>=(float, mce::Radian);
    void operator>(float, mce::Degree);
    void operator<=(float, mce::Degree);
    void operator<(mce::Radian, float);
//  void numChannels(mce::ImageFormat); //TODO: incomplete function definition
    void operator/(mce::Radian, float);
    void operator!=(float, mce::Degree);
    void operator!=(mce::Degree, float);
    void operator>=(mce::Degree, float);
    void operator==(float, mce::Radian);
    void operator>=(mce::Radian, float);
    void operator-(mce::Radian, float);
    void operator*(mce::Radian, float);
    void operator>(mce::Degree, float);
    void operator-(float, mce::Degree);
    void operator*(mce::Degree, float);
//  void strideFromImageFormat(mce::ImageFormat); //TODO: incomplete function definition
    void operator<(mce::Degree, float);
    void operator*(float, mce::Degree);
    void operator+(mce::Degree, float);
    void operator==(float, mce::Degree);
    void operator!=(float, mce::Radian);
    void operator+(float, mce::Radian);
    void operator/(float, mce::Radian);
    void operator-(mce::Degree, float);
    void operator!=(mce::Radian, float);
    void operator+(float, mce::Degree);
    void operator<(float, mce::Radian);
    void operator-(float, mce::Radian);
    void operator/(mce::Degree, float);
    void operator*(float, mce::Radian);
};
