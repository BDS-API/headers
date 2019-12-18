#pragma once

class MobArmorEquipmentPacket : Packet {

public:
    virtual ~MobArmorEquipmentPacket();
    virtual void getId(void)const;
    virtual void getName[abi:cxx11](void)const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    void MobArmorEquipmentPacket(MobArmorEquipmentPacket const&);
    void MobArmorEquipmentPacket(void);
    void MobArmorEquipmentPacket(Mob const&);
    void get(ItemStack &, ItemStack const&);
    void fillIn(Mob &)const;
    void set(Mob &, ItemStack const&, ArmorSlot)const;
};
