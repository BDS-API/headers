#pragma once

#include "./StringByteInput.h"
#include <string>


class BigEndianStringByteInput : StringByteInput {

public:
    virtual ~BigEndianStringByteInput();
    virtual void readFloat();
    virtual void readDouble();
    virtual void readShort();
    virtual void readInt();
    virtual void readLongLong();
//  virtual void readBytes(void *, unsigned long); //TODO: incomplete function definition
//  virtual void readBigEndianBytes(void *, unsigned long); //TODO: incomplete function definition

    BigEndianStringByteInput(std::string const&);
};
