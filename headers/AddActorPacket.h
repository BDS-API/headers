#pragma once

class AddActorPacket : Packet {

public:
    virtual ~AddActorPacket();
    virtual void getId(void)const;
    virtual void getName[abi:cxx11](void)const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    void AddActorPacket(void);
    void AddActorPacket(Actor &);
    void getVelocity(void)const;
    void getPos(void)const;
    void getRot(void)const;
    void getYHeadRotation(void)const;
    void getType(void)const;
    void getEntityId(void)const;
    void getRuntimeId(void)const;
    void getAttributes(void)const;
    void getData(void)const;
};
