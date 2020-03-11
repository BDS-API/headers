#pragma once

#include "../../io/BinaryStream.h"
#include "../../io/ReadOnlyBinaryStream.h"
#include "./Packet.h"
#include "../../item/ItemStack.h"
#include "./MobArmorEquipmentPacket.h"
#include "../../actor/Mob.h"
#include <string>


class MobArmorEquipmentPacket : Packet {

public:
    virtual ~MobArmorEquipmentPacket();
    virtual void getId()const;
    virtual std::string getName()const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    MobArmorEquipmentPacket(MobArmorEquipmentPacket const&);
    MobArmorEquipmentPacket();
    MobArmorEquipmentPacket(Mob const&);
    void get(ItemStack &, ItemStack const&);
    void fillIn(Mob &)const;
//  void set(Mob &, ItemStack const&, ArmorSlot)const; //TODO: incomplete function definition
};
