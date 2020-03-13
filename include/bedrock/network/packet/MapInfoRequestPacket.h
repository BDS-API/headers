#pragma once

#include <string>
#include "../../actor/unmapped/ActorUniqueID.h"
#include "Packet.h"


class MapInfoRequestPacket : Packet {

public:
    ~MapInfoRequestPacket(); // _ZN20MapInfoRequestPacketD2Ev
    virtual void getId()const; // _ZNK20MapInfoRequestPacket5getIdEv
    virtual std::string getName()const; // _ZNK20MapInfoRequestPacket7getNameB5cxx11Ev
    virtual void write(BinaryStream &)const; // _ZNK20MapInfoRequestPacket5writeER12BinaryStream
    virtual void read(ReadOnlyBinaryStream &); // _ZN20MapInfoRequestPacket4readER20ReadOnlyBinaryStream
    MapInfoRequestPacket(); // _ZN20MapInfoRequestPacketC2Ev
    MapInfoRequestPacket(ActorUniqueID); // _ZN20MapInfoRequestPacketC2E13ActorUniqueID
    void getMapId()const; // _ZNK20MapInfoRequestPacket8getMapIdEv
};
