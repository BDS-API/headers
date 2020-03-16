#pragma once

#include "../../actor/unmapped/ActorRuntimeID.h"
#include <string>
#include "Packet.h"


class MobEquipmentPacket : public Packet {

public:
    virtual ~MobEquipmentPacket(); // _ZN18MobEquipmentPacketD2Ev
    virtual void __fake_function0(); // fake
    virtual void getId()const; // _ZNK18MobEquipmentPacket5getIdEv
    virtual std::string getName()const; // _ZNK18MobEquipmentPacket7getNameB5cxx11Ev
    virtual void write(BinaryStream &)const; // _ZNK18MobEquipmentPacket5writeER12BinaryStream
    virtual void read(ReadOnlyBinaryStream &); // _ZN18MobEquipmentPacket4readER20ReadOnlyBinaryStream
    MobEquipmentPacket(); // _ZN18MobEquipmentPacketC2Ev
//    MobEquipmentPacket(ActorRuntimeID, ItemStack const&, int, int, long); //TODO: incomplete function definition // _ZN18MobEquipmentPacketC2E14ActorRuntimeIDRK9ItemStackii11ContainerID
    void _convertToBytes(); // _ZN18MobEquipmentPacket15_convertToBytesEv
    void _convertFromBytes(); // _ZN18MobEquipmentPacket17_convertFromBytesEv
};
