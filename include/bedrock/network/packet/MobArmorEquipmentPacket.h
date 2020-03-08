#pragma once

#include "../../io/BinaryStream"
#include "../../actor/Mob"
#include "../../io/ReadOnlyBinaryStream"
#include "../../item/ItemStack"


class MobArmorEquipmentPacket : Packet {

public:
    virtual MobArmorEquipmentPacket::~MobArmorEquipmentPacket()
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
