#pragma once

#include <string>
#include "../../actor/unmapped/ActorUniqueID.h"
#include "Packet.h"


class MapCreateLockedCopyPacket : Packet {

public:
    ~MapCreateLockedCopyPacket(); // _ZN25MapCreateLockedCopyPacketD2Ev
    virtual void getId()const; // _ZNK25MapCreateLockedCopyPacket5getIdEv
    virtual std::string getName()const; // _ZNK25MapCreateLockedCopyPacket7getNameB5cxx11Ev
    virtual void write(BinaryStream &)const; // _ZNK25MapCreateLockedCopyPacket5writeER12BinaryStream
    virtual void read(ReadOnlyBinaryStream &); // _ZN25MapCreateLockedCopyPacket4readER20ReadOnlyBinaryStream
    MapCreateLockedCopyPacket(); // _ZN25MapCreateLockedCopyPacketC2Ev
    MapCreateLockedCopyPacket(ActorUniqueID, ActorUniqueID); // _ZN25MapCreateLockedCopyPacketC2E13ActorUniqueIDS0_
    void getOriginalMapId()const; // _ZNK25MapCreateLockedCopyPacket16getOriginalMapIdEv
    void getNewMapId()const; // _ZNK25MapCreateLockedCopyPacket11getNewMapIdEv
};
