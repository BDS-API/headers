#pragma once

#include "../util/Color.h"
#include "ItemStack.h"
#include <string>
#include "../level/Level.h"
#include "../actor/Actor.h"
#include "../actor/Mob.h"
#include "ItemInstance.h"
#include "../util/Vec3.h"
#include "../nbt/CompoundTag.h"
#include "../actor/Player.h"
#include "ItemStackBase.h"
#include <memory>
#include "Item.h"
#include "../container/Container.h"
#include "../../unmapped/Block.h"
#include "../block/unmapped/BlockSource.h"
#include "unmapped/ItemDescriptor.h"


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

    virtual bool isArmor()const;
    virtual void setIcon(std::string const&, int);
    virtual void hurtEnemy(ItemStack &, Mob *, Mob *)const;
    virtual void dispense(BlockSource &, Container &, int, Vec3 const&, unsigned char)const;
    virtual void use(ItemStack &, Player &)const;
    virtual void getDamageChance(int)const;
    virtual void getEnchantValue()const;
    virtual void mineBlock(ItemStack &, Block const&, int, int, int, Actor *)const;
    virtual void getEnchantSlot()const;
    virtual void getArmorValue()const;
    ~ArmorItem();
    virtual bool isValidRepairItem(ItemInstance const&, ItemInstance const&)const;
    virtual void appendFormattedHovertext(ItemStackBase const&, Level &, std::string &, bool)const;
    virtual void getIcon(ItemStackBase const&, int, bool)const;
    virtual bool isTintable()const;
    virtual void getColor(std::unique_ptr<CompoundTag> const&, ItemDescriptor const&)const;
//  void dispenseArmor(BlockSource &, Container &, int, Vec3 const&, unsigned char, ArmorSlot); //TODO: incomplete function definition
    bool hasCustomColor(std::unique_ptr<CompoundTag> const&)const;
    void getSlotForItem(ItemStack const&);
    bool isFlyEnabled(ItemInstance const&);
    bool isDamageable(ItemDescriptor const&);
    bool isElytra()const;
    bool isElytraBroken(int);
//  void getArmorForSlot(ArmorSlot, int); //TODO: incomplete function definition
    bool isElytra(ItemDescriptor const&);
//  ArmorItem(std::string const&, int, ArmorItem::ArmorMaterial const&, int, ArmorSlot); //TODO: incomplete function definition
    void getTierItem()const;
    void clearColor(ItemStack &)const;
    void setColor(ItemStack &, Color const&)const;
//  void playEquipSound(BlockSource &, ArmorSlot, Player &)const; //TODO: incomplete function definition
    class ArmorMaterial {

    public:
//      void getHealthForSlot(ArmorSlot)const; //TODO: incomplete function definition
        ArmorMaterial(int, int, int, int, int, int);
        void getEnchantValue()const;
//      void getDefenseForSlot(ArmorSlot)const; //TODO: incomplete function definition
    };
};
