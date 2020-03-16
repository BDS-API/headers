#pragma once

#include "../../actor/unmapped/ActorRuntimeID.h"
#include <string>
#include "Packet.h"


class SetActorDataPacket : public Packet {

public:
    virtual ~SetActorDataPacket(); // _ZN18SetActorDataPacketD2Ev
    virtual void __fake_function0(); // fake
    virtual void getId()const; // _ZNK18SetActorDataPacket5getIdEv
    virtual std::string getName()const; // _ZNK18SetActorDataPacket7getNameB5cxx11Ev
    virtual void write(BinaryStream &)const; // _ZNK18SetActorDataPacket5writeER12BinaryStream
    virtual void read(ReadOnlyBinaryStream &); // _ZN18SetActorDataPacket4readER20ReadOnlyBinaryStream
    SetActorDataPacket(); // _ZN18SetActorDataPacketC2Ev
    SetActorDataPacket(ActorRuntimeID, SynchedActorData &, bool); // _ZN18SetActorDataPacketC2E14ActorRuntimeIDR16SynchedActorDatab
    void getUnpackedData()const; // _ZNK18SetActorDataPacket15getUnpackedDataEv
};
