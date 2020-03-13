#pragma once

#include <string>
#include "Packet.h"


class MobArmorEquipmentPacket : Packet {

public:
    ~MobArmorEquipmentPacket(); // _ZN23MobArmorEquipmentPacketD2Ev
    virtual void getId()const; // _ZNK23MobArmorEquipmentPacket5getIdEv
    virtual std::string getName()const; // _ZNK23MobArmorEquipmentPacket7getNameB5cxx11Ev
    virtual void write(BinaryStream &)const; // _ZNK23MobArmorEquipmentPacket5writeER12BinaryStream
    virtual void read(ReadOnlyBinaryStream &); // _ZN23MobArmorEquipmentPacket4readER20ReadOnlyBinaryStream
    MobArmorEquipmentPacket(MobArmorEquipmentPacket const&); // _ZN23MobArmorEquipmentPacketC2ERKS_
    MobArmorEquipmentPacket(); // _ZN23MobArmorEquipmentPacketC2Ev
    MobArmorEquipmentPacket(Mob const&); // _ZN23MobArmorEquipmentPacketC2ERK3Mob
    void get(ItemStack &, ItemStack const&); // _ZN23MobArmorEquipmentPacket3getER9ItemStackRKS0_
    void fillIn(Mob &)const; // _ZNK23MobArmorEquipmentPacket6fillInER3Mob
//  void set(Mob &, ItemStack const&, ArmorSlot)const; //TODO: incomplete function definition // _ZNK23MobArmorEquipmentPacket3setER3MobRK9ItemStack9ArmorSlot
};
