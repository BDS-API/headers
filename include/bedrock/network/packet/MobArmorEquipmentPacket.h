#pragma once

#include "../../item/ItemStack"
#include "../../io/ReadOnlyBinaryStream"
#include "../../actor/Mob"
#include "../../io/BinaryStream"


class MobArmorEquipmentPacket : Packet {

public:
    MobArmorEquipmentPacket::~MobArmorEquipmentPacket()
    virtual void getId()const;
    virtual void getName()const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    MobArmorEquipmentPacket(MobArmorEquipmentPacket const&);
    MobArmorEquipmentPacket(void);
    MobArmorEquipmentPacket(Mob const&);
    void get(ItemStack &, ItemStack const&);
    void fillIn(Mob &)const;
    void set(Mob &, ItemStack const&, ArmorSlot)const;
};
