#pragma once

#include "../mce/Radian.h"
#include "../mce/Degree.h"


class mce {

public:


//  void numChannels(mce::ImageFormat); //TODO: incomplete function definition
//  void strideFromImageFormat(mce::ImageFormat); //TODO: incomplete function definition
    void operator+(mce::Radian, float);
    void operator+(float, mce::Radian);
    void operator-(mce::Radian, float);
    void operator-(float, mce::Radian);
    void operator*(mce::Radian, float);
    void operator*(float, mce::Radian);
    void operator/(mce::Radian, float);
    void operator/(float, mce::Radian);
    void operator>(mce::Radian, float);
    void operator>(float, mce::Radian);
    void operator>=(mce::Radian, float);
    void operator>=(float, mce::Radian);
    void operator<(mce::Radian, float);
    void operator<(float, mce::Radian);
    void operator<=(mce::Radian, float);
    void operator<=(float, mce::Radian);
    void operator==(mce::Radian, float);
    void operator==(float, mce::Radian);
    void operator!=(mce::Radian, float);
    void operator!=(float, mce::Radian);
    void operator+(mce::Degree, float);
    void operator+(float, mce::Degree);
    void operator-(mce::Degree, float);
    void operator-(float, mce::Degree);
    void operator*(mce::Degree, float);
    void operator*(float, mce::Degree);
    void operator/(mce::Degree, float);
    void operator/(float, mce::Degree);
    void operator>(mce::Degree, float);
    void operator>(float, mce::Degree);
    void operator>=(mce::Degree, float);
    void operator>=(float, mce::Degree);
    void operator<(mce::Degree, float);
    void operator<(float, mce::Degree);
    void operator<=(mce::Degree, float);
    void operator<=(float, mce::Degree);
    void operator==(mce::Degree, float);
    void operator==(float, mce::Degree);
    void operator!=(mce::Degree, float);
    void operator!=(float, mce::Degree);
};
