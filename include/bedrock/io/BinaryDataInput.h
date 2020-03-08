#pragma once



class BinaryDataInput : BytesDataInput {

public:
    virtual BinaryDataInput::~BinaryDataInput()
    virtual void readString();
    virtual void readLongString();
    virtual void readFloat();
    virtual void readDouble();
    virtual void readByte();
    virtual void readShort();
    virtual void readInt();
    virtual void readLongLong();
    virtual void readBytes(void *, unsigned long);
    virtual void numBytesLeft()const;

    BinaryDataInput(ReadOnlyBinaryStream &);
};
