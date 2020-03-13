#pragma once

#include <string>
#include "../../actor/unmapped/ActorUniqueID.h"
#include "Packet.h"


class CameraPacket : Packet {

public:
    ~CameraPacket(); // _ZN12CameraPacketD2Ev
    virtual void getId()const; // _ZNK12CameraPacket5getIdEv
    virtual std::string getName()const; // _ZNK12CameraPacket7getNameB5cxx11Ev
    virtual void write(BinaryStream &)const; // _ZNK12CameraPacket5writeER12BinaryStream
    virtual void read(ReadOnlyBinaryStream &); // _ZN12CameraPacket4readER20ReadOnlyBinaryStream
    CameraPacket(); // _ZN12CameraPacketC2Ev
    CameraPacket(ActorUniqueID, ActorUniqueID); // _ZN12CameraPacketC2E13ActorUniqueIDS0_
};
