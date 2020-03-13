#pragma once

#include <string>
#include "Packet.h"


class UpdateEquipPacket : Packet {

public:
    ~UpdateEquipPacket(); // _ZN17UpdateEquipPacketD2Ev
    virtual void getId()const; // _ZNK17UpdateEquipPacket5getIdEv
    virtual std::string getName()const; // _ZNK17UpdateEquipPacket7getNameB5cxx11Ev
    virtual void write(BinaryStream &)const; // _ZNK17UpdateEquipPacket5writeER12BinaryStream
    virtual void read(ReadOnlyBinaryStream &); // _ZN17UpdateEquipPacket4readER20ReadOnlyBinaryStream
    UpdateEquipPacket(); // _ZN17UpdateEquipPacketC2Ev
//  UpdateEquipPacket(ContainerID, ContainerType, int, CompoundTag &&, ActorUniqueID const&); //TODO: incomplete function definition // _ZN17UpdateEquipPacketC2E11ContainerID13ContainerTypeiO11CompoundTagRK13ActorUniqueID
};
