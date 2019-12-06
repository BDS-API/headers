#pragma once

class StringByteInput : BytesDataInput {

public:
    virtual ~StringByteInput();
    virtual void readBytes(void *, unsigned long);
    virtual void numBytesLeft(void)const;

    void StringByteInput(gsl::basic_string_span<char const, -1l>);
};
