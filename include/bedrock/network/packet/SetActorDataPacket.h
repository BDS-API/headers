#pragma once

class SetActorDataPacket : Packet {

public:
    virtual SetActorDataPacket::~SetActorDataPacket();
    virtual void getId(void)const;
    virtual void getName[abi:cxx11](void)const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    SetActorDataPacket(void);
    SetActorDataPacket(ActorRuntimeID, SynchedActorData &, bool);
    void getUnpackedData(void)const;
};
