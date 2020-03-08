#pragma once



class BigEndianStringByteInput : StringByteInput {

public:
    virtual BigEndianStringByteInput::~BigEndianStringByteInput()
    virtual void readFloat();
    virtual void readDouble();
    virtual void readShort();
    virtual void readInt();
    virtual void readLongLong();
    virtual void readBytes(void *, unsigned long);
    virtual void readBigEndianBytes(void *, unsigned long);

    BigEndianStringByteInput(std::string const&);
};
