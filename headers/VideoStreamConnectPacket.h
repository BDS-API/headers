#pragma once

class VideoStreamConnectPacket : Packet {

    virtual ~VideoStreamConnectPacket();
    virtual ~VideoStreamConnectPacket();
    virtual void getId(void)const;
    virtual void _ZNK24VideoStreamConnectPacket7getNameB5cxx11Ev;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);
    virtual void disallowBatching(void)const;
}
