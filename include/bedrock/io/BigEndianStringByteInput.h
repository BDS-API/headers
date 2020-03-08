#pragma once



class BigEndianStringByteInput : StringByteInput {

public:
    virtual BigEndianStringByteInput::~BigEndianStringByteInput();
    virtual void readFloat(void);
    virtual void readDouble(void);
    virtual void readShort(void);
    virtual void readInt(void);
    virtual void readLongLong(void);
    virtual void readBytes(void *, unsigned long);
    virtual void readBigEndianBytes(void *, unsigned long);

    BigEndianStringByteInput(std::string const&);
};
