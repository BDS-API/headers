#pragma once



class StringByteOutput : BytesDataOutput {

public:
    StringByteOutput::~StringByteOutput()
    virtual void writeBytes(void const*, unsigned long);

    StringByteOutput(std::string &);
};
