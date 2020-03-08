#pragma once



class BytesDataInput : IDataInput {

public:
    BytesDataInput::~BytesDataInput()
    virtual void readString();
    virtual void readLongString();
    virtual void readFloat();
    virtual void readDouble();
    virtual void readByte();
    virtual void readShort();
    virtual void readInt();
    virtual void readLongLong();

    BytesDataInput(void);
};
