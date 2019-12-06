#pragma once

class BigEndianStringByteInput : StringByteInput {

public:
    virtual ~BigEndianStringByteInput();
    virtual void readFloat(void);
    virtual void readDouble(void);
    virtual void readShort(void);
    virtual void readInt(void);
    virtual void readLongLong(void);
    virtual void readBytes(void *, unsigned long);
    virtual void readBigEndianBytes(void *, unsigned long);

    void BigEndianStringByteInput(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
};
