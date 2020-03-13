#pragma once

#include "BytesDataInput.h"


class StringByteInput : BytesDataInput {

public:
    ~StringByteInput(); // _ZN15StringByteInputD2Ev
    virtual void readBytes(void *, unsigned long); // _ZN15StringByteInput9readBytesEPvm
    virtual void numBytesLeft()const; // _ZNK15StringByteInput12numBytesLeftEv
//  StringByteInput(gsl::basic_string_span<char const, -1l>); //TODO: incomplete function definition // _ZN15StringByteInputC2EN3gsl17basic_string_spanIKcLln1EEE
};
