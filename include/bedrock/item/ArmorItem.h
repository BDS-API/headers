#pragma once

#include "../actor/Mob.h"
#include "../block/unmapped/BlockSource.h"
#include <string>
#include "./ItemStackBase.h"
#include "../util/Color.h"
#include "../../unmapped/Block.h"
#include <memory>
#include "./ItemInstance.h"
#include "../container/Container.h"
#include "./Item.h"
#include "../level/Level.h"
#include "../util/Vec3.h"
#include "../actor/Actor.h"
#include "../../unmapped/ArmorMaterial.h"
#include "../actor/Player.h"
#include "../nbt/CompoundTag.h"
#include "./ItemStack.h"
#include "unmapped/ItemDescriptor.h"


class ArmorItem : Item {

public:
    static long mHealthPerSlot;
    static long LEATHER;
    static long CHAIN;
    static long IRON;
    static long GOLD;
    static long DIAMOND;
    static long ELYTRA;
    static long TURTLE;

    virtual ~ArmorItem();
    virtual bool isArmor()const;
    virtual void appendFormattedHovertext(ItemStackBase const&, Level &, std::string &, bool)const;
    virtual bool isValidRepairItem(ItemInstance const&, ItemInstance const&)const;
    virtual void getEnchantSlot()const;
    virtual void getEnchantValue()const;
    virtual void getArmorValue()const;
    virtual void getDamageChance(int)const;
    virtual void getColor(std::unique_ptr<CompoundTag, std::default_delete<CompoundTag>> const&, ItemDescriptor const&)const;
    virtual bool isTintable()const;
    virtual void use(ItemStack &, Player &)const;
    virtual void dispense(BlockSource &, Container &, int, Vec3 const&, unsigned char)const;
    virtual void hurtEnemy(ItemStack &, Mob *, Mob *)const;
    virtual void mineBlock(ItemStack &, Block const&, int, int, int, Actor *)const;
    virtual void getIcon(ItemStackBase const&, int, bool)const;
    virtual void setIcon(std::string const&, int);

    void getTierItem()const;
    bool hasCustomColor(std::unique_ptr<CompoundTag, std::default_delete<CompoundTag>> const&)const;
    void clearColor(ItemStack &)const;
    void setColor(ItemStack &, Color const&)const;
//  ArmorItem(std::string const&, int, ArmorItem::ArmorMaterial const&, int, ArmorSlot); //TODO: incomplete function definition
    bool isElytra()const;
//  void getArmorForSlot(ArmorSlot, int); //TODO: incomplete function definition
//  void dispenseArmor(BlockSource &, Container &, int, Vec3 const&, unsigned char, ArmorSlot); //TODO: incomplete function definition
    void getSlotForItem(ItemStack const&);
    bool isElytraBroken(int);
//  void playEquipSound(BlockSource &, ArmorSlot, Player &)const; //TODO: incomplete function definition
    bool isElytra(ItemDescriptor const&);
    bool isFlyEnabled(ItemInstance const&);
    bool isDamageable(ItemDescriptor const&);
};
