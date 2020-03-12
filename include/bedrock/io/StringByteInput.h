#pragma once

#include "BytesDataInput.h"


class StringByteInput : BytesDataInput {

public:
    virtual void readBytes(void *, unsigned long);
    virtual void numBytesLeft()const;
    ~StringByteInput();
//  StringByteInput(gsl::basic_string_span<char const, -1l>); //TODO: incomplete function definition
};
