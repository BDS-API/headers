#pragma once

class CameraPacket : Packet {

    virtual void CameraPacket::~CameraPacket();
    virtual void CameraPacket::~CameraPacket();
    virtual void getId(void)const;
    virtual void _ZNK12CameraPacket7getNameB5cxx11Ev;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);
    virtual void disallowBatching(void)const;
}
