#pragma once

class MapInfoRequestPacket : Packet {

    virtual void MapInfoRequest~MapInfoRequestPacket();
    virtual void MapInfoRequest~MapInfoRequestPacket();
    virtual void MapInfoRequestgetId(void)const;
    virtual void _ZNK20MapInfoRequestPacket7getNameB5cxx11Ev;
    virtual void MapInfoRequestwrite(BinaryStream &)const;
    virtual void MapInfoRequestread(ReadOnlyBinaryStream &);
    virtual void disallowBatching(void)const;
}
