#pragma once

class SetLocalPlayerAsInitializedPacket : Packet {

public:
    virtual ~SetLocalPlayerAsInitializedPacket();
    virtual void getId(void)const;
    virtual void getName[abi:cxx11](void)const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    void SetLocalPlayerAsInitializedPacket(void);
    void SetLocalPlayerAsInitializedPacket(ActorRuntimeID);
};
