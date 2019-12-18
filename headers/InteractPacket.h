#pragma once

class InteractPacket : Packet {

public:
    virtual ~InteractPacket();
    virtual void getId(void)const;
    virtual void getName[abi:cxx11](void)const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    void InteractPacket(void);
    void InteractPacket(InteractPacket::Action, ActorRuntimeID, Vec3 const&);
};
