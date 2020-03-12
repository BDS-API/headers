#pragma once

#include "BytesDataInput.h"


class StringByteInput : BytesDataInput {

public:
    virtual void numBytesLeft()const;
    virtual void readBytes(void *, unsigned long);
    ~StringByteInput();
//  StringByteInput(gsl::basic_string_span<char const, -1l>); //TODO: incomplete function definition
};
