#pragma once



class BytesDataInput : IDataInput {

public:
    virtual BytesDataInput::~BytesDataInput()
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
