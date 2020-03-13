#pragma once

#include "../mce/Radian.h"
#include "../mce/Degree.h"


namespace mce {

//  void numChannels(mce::ImageFormat); //TODO: incomplete function definition // _ZN3mce11numChannelsENS_11ImageFormatE
//  void strideFromImageFormat(mce::ImageFormat); //TODO: incomplete function definition // _ZN3mce21strideFromImageFormatENS_11ImageFormatE
    void operator+(mce::Radian, float); // _ZN3mceplENS_6RadianEf
    void operator+(float, mce::Radian); // _ZN3mceplEfNS_6RadianE
    void operator-(mce::Radian, float); // _ZN3mcemiENS_6RadianEf
    void operator-(float, mce::Radian); // _ZN3mcemiEfNS_6RadianE
    void operator*(mce::Radian, float); // _ZN3mcemlENS_6RadianEf
    void operator*(float, mce::Radian); // _ZN3mcemlEfNS_6RadianE
    void operator/(mce::Radian, float); // _ZN3mcedvENS_6RadianEf
    void operator/(float, mce::Radian); // _ZN3mcedvEfNS_6RadianE
    void operator>(mce::Radian, float); // _ZN3mcegtENS_6RadianEf
    void operator>(float, mce::Radian); // _ZN3mcegtEfNS_6RadianE
    void operator>=(mce::Radian, float); // _ZN3mcegeENS_6RadianEf
    void operator>=(float, mce::Radian); // _ZN3mcegeEfNS_6RadianE
    void operator<(mce::Radian, float); // _ZN3mceltENS_6RadianEf
    void operator<(float, mce::Radian); // _ZN3mceltEfNS_6RadianE
    void operator<=(mce::Radian, float); // _ZN3mceleENS_6RadianEf
    void operator<=(float, mce::Radian); // _ZN3mceleEfNS_6RadianE
    void operator==(mce::Radian, float); // _ZN3mceeqENS_6RadianEf
    void operator==(float, mce::Radian); // _ZN3mceeqEfNS_6RadianE
    void operator!=(mce::Radian, float); // _ZN3mceneENS_6RadianEf
    void operator!=(float, mce::Radian); // _ZN3mceneEfNS_6RadianE
    void operator+(mce::Degree, float); // _ZN3mceplENS_6DegreeEf
    void operator+(float, mce::Degree); // _ZN3mceplEfNS_6DegreeE
    void operator-(mce::Degree, float); // _ZN3mcemiENS_6DegreeEf
    void operator-(float, mce::Degree); // _ZN3mcemiEfNS_6DegreeE
    void operator*(mce::Degree, float); // _ZN3mcemlENS_6DegreeEf
    void operator*(float, mce::Degree); // _ZN3mcemlEfNS_6DegreeE
    void operator/(mce::Degree, float); // _ZN3mcedvENS_6DegreeEf
    void operator/(float, mce::Degree); // _ZN3mcedvEfNS_6DegreeE
    void operator>(mce::Degree, float); // _ZN3mcegtENS_6DegreeEf
    void operator>(float, mce::Degree); // _ZN3mcegtEfNS_6DegreeE
    void operator>=(mce::Degree, float); // _ZN3mcegeENS_6DegreeEf
    void operator>=(float, mce::Degree); // _ZN3mcegeEfNS_6DegreeE
    void operator<(mce::Degree, float); // _ZN3mceltENS_6DegreeEf
    void operator<(float, mce::Degree); // _ZN3mceltEfNS_6DegreeE
    void operator<=(mce::Degree, float); // _ZN3mceleENS_6DegreeEf
    void operator<=(float, mce::Degree); // _ZN3mceleEfNS_6DegreeE
    void operator==(mce::Degree, float); // _ZN3mceeqENS_6DegreeEf
    void operator==(float, mce::Degree); // _ZN3mceeqEfNS_6DegreeE
    void operator!=(mce::Degree, float); // _ZN3mceneENS_6DegreeEf
    void operator!=(float, mce::Degree); // _ZN3mceneEfNS_6DegreeE
};
