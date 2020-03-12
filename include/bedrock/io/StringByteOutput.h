#pragma once

#include <string>
#include "BytesDataOutput.h"


class StringByteOutput : BytesDataOutput {

public:
    ~StringByteOutput();
    virtual void writeBytes(void const*, unsigned long);
    StringByteOutput(std::string &);
};
