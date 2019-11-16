#pragma once

class MapInfoRequestPacket : Packet {

    virtual void MapInfoRequestPacket::~MapInfoRequestPacket();
    virtual void MapInfoRequestPacket::~MapInfoRequestPacket();
    virtual void getId(void)const;
    virtual void _ZNK20MapInfoRequestPacket7getNameB5cxx11Ev;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);
    virtual void disallowBatching(void)const;
}
