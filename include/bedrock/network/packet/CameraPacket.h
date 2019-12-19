#pragma once

class CameraPacket : Packet {

public:
    virtual CameraPacket::~CameraPacket();
    virtual void getId(void)const;
    virtual void getName[abi:cxx11](void)const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    CameraPacket(void);
    CameraPacket(ActorUniqueID, ActorUniqueID);
};
