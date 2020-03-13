#pragma once

#include <string>
#include "../../actor/unmapped/ActorUniqueID.h"
#include "Packet.h"


class UpdateTradePacket : Packet {

public:
    ~UpdateTradePacket(); // _ZN17UpdateTradePacketD2Ev
    virtual void getId()const; // _ZNK17UpdateTradePacket5getIdEv
    virtual std::string getName()const; // _ZNK17UpdateTradePacket7getNameB5cxx11Ev
    virtual void write(BinaryStream &)const; // _ZNK17UpdateTradePacket5writeER12BinaryStream
    virtual void read(ReadOnlyBinaryStream &); // _ZN17UpdateTradePacket4readER20ReadOnlyBinaryStream
    UpdateTradePacket(); // _ZN17UpdateTradePacketC2Ev
//  UpdateTradePacket(ContainerID, ContainerType, int, std::string const&, CompoundTag &&, ActorUniqueID const&, ActorUniqueID const, int, bool, bool); //TODO: incomplete function definition // _ZN17UpdateTradePacketC2E11ContainerID13ContainerTypeiRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEO11CompoundTagRK13ActorUniqueIDSE_ibb
};
