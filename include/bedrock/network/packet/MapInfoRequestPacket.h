#pragma once

class MapInfoRequestPacket : Packet {

public:
    virtual MapInfoRequestPacket::~MapInfoRequestPacket();
    virtual void getId(void)const;
    virtual void getName[abi:cxx11](void)const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    MapInfoRequestPacket(void);
    MapInfoRequestPacket(ActorUniqueID);
    void getMapId(void)const;
};
