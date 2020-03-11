#pragma once

#include "./BytesDataInput.h"


class StringByteInput : BytesDataInput {

public:
    virtual ~StringByteInput();
//  virtual void readBytes(void *, unsigned long); //TODO: incomplete function definition
    virtual void numBytesLeft()const;

//  StringByteInput(gsl::basic_string_span<char const, -1l>); //TODO: incomplete function definition
};
