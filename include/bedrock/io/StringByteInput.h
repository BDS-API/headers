#pragma once



class StringByteInput : BytesDataInput {

public:
    virtual StringByteInput::~StringByteInput()
    virtual void readBytes(void *, unsigned long);
    virtual void numBytesLeft()const;

    StringByteInput(gsl::basic_string_span<char const, -1l>);
};
