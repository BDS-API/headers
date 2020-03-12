#pragma once

#include <string>
#include "Packet.h"


class MobArmorEquipmentPacket : Packet {

public:
    virtual void getId()const;
    virtual std::string getName()const;
    ~MobArmorEquipmentPacket();
    virtual void read(ReadOnlyBinaryStream &);
    virtual void write(BinaryStream &)const;
    void fillIn(Mob &)const;
    MobArmorEquipmentPacket(MobArmorEquipmentPacket const&);
    MobArmorEquipmentPacket(Mob const&);
//  void set(Mob &, ItemStack const&, ArmorSlot)const; //TODO: incomplete function definition
    MobArmorEquipmentPacket();
    void get(ItemStack &, ItemStack const&);
};
