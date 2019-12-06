#pragma once

class BytesDataInput : IDataInput {

public:
    virtual ~BytesDataInput();
    virtual void readFloat(void);
    virtual void readDouble(void);
    virtual void readByte(void);
    virtual void readShort(void);
    virtual void readInt(void);
    virtual void readLongLong(void);

    void BytesDataInput(void);
};
