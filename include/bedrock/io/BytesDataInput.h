#pragma once



class BytesDataInput : IDataInput {

public:
    virtual BytesDataInput::~BytesDataInput();
    virtual void readString[abi:cxx11](void);
    virtual void readLongString[abi:cxx11](void);
    virtual void readFloat(void);
    virtual void readDouble(void);
    virtual void readByte(void);
    virtual void readShort(void);
    virtual void readInt(void);
    virtual void readLongLong(void);

    BytesDataInput(void);
};
