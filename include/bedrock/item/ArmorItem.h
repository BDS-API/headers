#pragma once

#include <string>
#include <memory>
#include "Item.h"


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

    ~ArmorItem(); // _ZN9ArmorItemD2Ev
    virtual bool isArmor()const; // _ZNK9ArmorItem7isArmorEv
    virtual void appendFormattedHovertext(ItemStackBase const&, Level &, std::string &, bool)const; // _ZNK9ArmorItem24appendFormattedHovertextERK13ItemStackBaseR5LevelRNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEb
    virtual bool isValidRepairItem(ItemInstance const&, ItemInstance const&)const; // _ZNK9ArmorItem17isValidRepairItemERK12ItemInstanceS2_
    virtual void getEnchantSlot()const; // _ZNK9ArmorItem14getEnchantSlotEv
    virtual void getEnchantValue()const; // _ZNK9ArmorItem15getEnchantValueEv
    virtual void getArmorValue()const; // _ZNK9ArmorItem13getArmorValueEv
    virtual void getDamageChance(int)const; // _ZNK9ArmorItem15getDamageChanceEi
    virtual void getColor(std::unique_ptr<CompoundTag> const&, ItemDescriptor const&)const; // _ZNK9ArmorItem8getColorERKSt10unique_ptrI11CompoundTagSt14default_deleteIS1_EERK14ItemDescriptor
    virtual bool isTintable()const; // _ZNK9ArmorItem10isTintableEv
    virtual void use(ItemStack &, Player &)const; // _ZNK9ArmorItem3useER9ItemStackR6Player
    virtual void dispense(BlockSource &, Container &, int, Vec3 const&, unsigned char)const; // _ZNK9ArmorItem8dispenseER11BlockSourceR9ContaineriRK4Vec3h
    virtual void hurtEnemy(ItemStack &, Mob *, Mob *)const; // _ZNK9ArmorItem9hurtEnemyER9ItemStackP3MobS3_
    virtual void mineBlock(ItemStack &, Block const&, int, int, int, Actor *)const; // _ZNK9ArmorItem9mineBlockER9ItemStackRK5BlockiiiP5Actor
    virtual void getIcon(ItemStackBase const&, int, bool)const; // _ZNK9ArmorItem7getIconERK13ItemStackBaseib
    virtual void setIcon(std::string const&, int); // _ZN9ArmorItem7setIconERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEi
    void getTierItem()const; // _ZNK9ArmorItem11getTierItemEv
    bool hasCustomColor(std::unique_ptr<CompoundTag> const&)const; // _ZNK9ArmorItem14hasCustomColorERKSt10unique_ptrI11CompoundTagSt14default_deleteIS1_EE
    void clearColor(ItemStack &)const; // _ZNK9ArmorItem10clearColorER9ItemStack
    void setColor(ItemStack &, Color const&)const; // _ZNK9ArmorItem8setColorER9ItemStackRK5Color
//  ArmorItem(std::string const&, int, ArmorItem::ArmorMaterial const&, int, ArmorSlot); //TODO: incomplete function definition // _ZN9ArmorItemC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiRKNS_13ArmorMaterialEi9ArmorSlot
    bool isElytra()const; // _ZNK9ArmorItem8isElytraEv
//  void getArmorForSlot(ArmorSlot, int); //TODO: incomplete function definition // _ZN9ArmorItem15getArmorForSlotE9ArmorSloti
//  void dispenseArmor(BlockSource &, Container &, int, Vec3 const&, unsigned char, ArmorSlot); //TODO: incomplete function definition // _ZN9ArmorItem13dispenseArmorER11BlockSourceR9ContaineriRK4Vec3h9ArmorSlot
    void getSlotForItem(ItemStack const&); // _ZN9ArmorItem14getSlotForItemERK9ItemStack
    bool isElytraBroken(int); // _ZN9ArmorItem14isElytraBrokenEi
//  void playEquipSound(BlockSource &, ArmorSlot, Player &)const; //TODO: incomplete function definition // _ZNK9ArmorItem14playEquipSoundER11BlockSource9ArmorSlotR6Player
    bool isElytra(ItemDescriptor const&); // _ZN9ArmorItem8isElytraERK14ItemDescriptor
    bool isFlyEnabled(ItemInstance const&); // _ZN9ArmorItem12isFlyEnabledERK12ItemInstance
    bool isDamageable(ItemDescriptor const&); // _ZN9ArmorItem12isDamageableERK14ItemDescriptor
    class ArmorMaterial {

    public:
        ArmorMaterial(int, int, int, int, int, int); // _ZN9ArmorItem13ArmorMaterialC2Eiiiiii
//      void getHealthForSlot(ArmorSlot)const; //TODO: incomplete function definition // _ZNK9ArmorItem13ArmorMaterial16getHealthForSlotE9ArmorSlot
//      void getDefenseForSlot(ArmorSlot)const; //TODO: incomplete function definition // _ZNK9ArmorItem13ArmorMaterial17getDefenseForSlotE9ArmorSlot
        void getEnchantValue()const; // _ZNK9ArmorItem13ArmorMaterial15getEnchantValueEv
    };
};
