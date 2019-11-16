#pragma once

class BinaryDataInput : BytesDataInput {

    virtual void ~BinaryDataInput();
    virtual void ~BinaryDataInput();
    virtual void _ZN15BinaryDataInput10readStringB5cxx11Ev;
    virtual void _ZN15BinaryDataInput14readLongStringB5cxx11Ev;
    virtual void readFloat(void);
    virtual void readDouble(void);
    virtual void readByte(void);
    virtual void readShort(void);
    virtual void readInt(void);
    virtual void readLongLong(void);
    virtual void readBytes(void *, unsigned long);
    virtual void numBytesLeft(void)const;
}
