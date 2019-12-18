#pragma once

class CameraPacket : Packet {

public:
    virtual ~CameraPacket();
    virtual void getId(void)const;
    virtual void getName[abi:cxx11](void)const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    void CameraPacket(void);
    void CameraPacket(ActorUniqueID, ActorUniqueID);
};
