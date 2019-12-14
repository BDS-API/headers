#pragma once

class StringByteOutput : BytesDataOutput {

public:
    virtual ~StringByteOutput();
    virtual void writeBytes(void const*, unsigned long);

    void StringByteOutput(std::string &);
};
