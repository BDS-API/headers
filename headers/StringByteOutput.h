#pragma once

class StringByteOutput : BytesDataOutput {

public:
    virtual ~StringByteOutput();
    virtual void writeBytes(void const*, unsigned long);

    void StringByteOutput(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> &);
};
