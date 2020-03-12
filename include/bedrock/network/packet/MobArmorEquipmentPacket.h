#pragma once

#include "../../io/BinaryStream.h"
#include "../../io/ReadOnlyBinaryStream.h"
#include "../../item/ItemStack.h"
#include "../../actor/Mob.h"
#include "Packet.h"


class MobArmorEquipmentPacket : Packet {

public:
    virtual void getId()const;
    ~MobArmorEquipmentPacket();
    virtual std::string getName()const;
    virtual void read(ReadOnlyBinaryStream &);
    virtual void write(BinaryStream &)const;
    MobArmorEquipmentPacket(Mob const&);
    void fillIn(Mob &)const;
//  void set(Mob &, ItemStack const&, ArmorSlot)const; //TODO: incomplete function definition
    void get(ItemStack &, ItemStack const&);
    MobArmorEquipmentPacket(MobArmorEquipmentPacket const&);
    MobArmorEquipmentPacket();
};
