#pragma once

#include "./BytesDataOutput.h"
#include <string>


class StringByteOutput : BytesDataOutput {

public:
    virtual ~StringByteOutput();
//  virtual void writeBytes(void const*, unsigned long); //TODO: incomplete function definition

    StringByteOutput(std::string &);
};
