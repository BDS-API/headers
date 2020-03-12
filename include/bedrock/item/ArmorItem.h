#pragma once

#include <memory>
#include "Item.h"
#include <string>


class ArmorItem : Item {

public:
    class ArmorMaterial;

    static long mHealthPerSlot;
    static long LEATHER;
    static long CHAIN;
    static long IRON;
    static long GOLD;
    static long DIAMOND;
    static long ELYTRA;
    static long TURTLE;

    virtual void getDamageChance(int)const;
    virtual bool isTintable()const;
    virtual void getIcon(ItemStackBase const&, int, bool)const;
    virtual void getColor(std::unique_ptr<CompoundTag> const&, ItemDescriptor const&)const;
    ~ArmorItem();
    virtual void getEnchantValue()const;
    virtual bool isValidRepairItem(ItemInstance const&, ItemInstance const&)const;
    virtual void mineBlock(ItemStack &, Block const&, int, int, int, Actor *)const;
    virtual void dispense(BlockSource &, Container &, int, Vec3 const&, unsigned char)const;
    virtual void appendFormattedHovertext(ItemStackBase const&, Level &, std::string &, bool)const;
    virtual bool isArmor()const;
    virtual void hurtEnemy(ItemStack &, Mob *, Mob *)const;
    virtual void setIcon(std::string const&, int);
    virtual void use(ItemStack &, Player &)const;
    virtual void getEnchantSlot()const;
    virtual void getArmorValue()const;
    void clearColor(ItemStack &)const;
    bool hasCustomColor(std::unique_ptr<CompoundTag> const&)const;
    bool isElytraBroken(int);
    void getSlotForItem(ItemStack const&);
    void setColor(ItemStack &, Color const&)const;
    bool isElytra()const;
//  void dispenseArmor(BlockSource &, Container &, int, Vec3 const&, unsigned char, ArmorSlot); //TODO: incomplete function definition
//  void playEquipSound(BlockSource &, ArmorSlot, Player &)const; //TODO: incomplete function definition
    bool isElytra(ItemDescriptor const&);
    bool isDamageable(ItemDescriptor const&);
    bool isFlyEnabled(ItemInstance const&);
//  void getArmorForSlot(ArmorSlot, int); //TODO: incomplete function definition
//  ArmorItem(std::string const&, int, ArmorItem::ArmorMaterial const&, int, ArmorSlot); //TODO: incomplete function definition
    void getTierItem()const;
    class ArmorMaterial {

    public:
        void getEnchantValue()const;
//      void getHealthForSlot(ArmorSlot)const; //TODO: incomplete function definition
        ArmorMaterial(int, int, int, int, int, int);
//      void getDefenseForSlot(ArmorSlot)const; //TODO: incomplete function definition
    };
};
