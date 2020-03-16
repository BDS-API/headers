#pragma once

#include "BytesDataInput.h"


class StringByteInput : public BytesDataInput {

public:
    virtual ~StringByteInput(); // _ZN15StringByteInputD2Ev
    virtual void __fake_function0(); // fake
    virtual void readBytes(void *, unsigned long); // _ZN15StringByteInput9readBytesEPvm
    virtual void numBytesLeft()const; // _ZNK15StringByteInput12numBytesLeftEv
//    StringByteInput(long); //TODO: incomplete function definition // _ZN15StringByteInputC2EN3gsl17basic_string_spanIKcLln1EEE
};
