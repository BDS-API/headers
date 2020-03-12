#pragma once

#include <string>
#include "BytesDataOutput.h"


class StringByteOutput : BytesDataOutput {

public:
    virtual void writeBytes(void const*, unsigned long);
    ~StringByteOutput();
    StringByteOutput(std::string &);
};
