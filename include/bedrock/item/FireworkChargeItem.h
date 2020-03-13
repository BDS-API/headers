#pragma once

#include <string>
#include <memory>
#include <vector>
#include "Item.h"


class FireworkChargeItem : Item {

public:
    static std::string TAG_EXPLOSION;
    static std::string TAG_E_TYPE;
    static std::string TAG_E_COLORS;
    static std::string TAG_E_FADECOLORS;
    static std::string TAG_E_TRAIL;
    static std::string TAG_E_FLICKER;

    ~FireworkChargeItem(); // _ZN18FireworkChargeItemD2Ev
    virtual void appendFormattedHovertext(ItemStackBase const&, Level &, std::string &, bool)const; // _ZNK18FireworkChargeItem24appendFormattedHovertextERK13ItemStackBaseR5LevelRNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEb
    virtual void getColor(std::unique_ptr<CompoundTag> const&, ItemDescriptor const&)const; // _ZNK18FireworkChargeItem8getColorERKSt10unique_ptrI11CompoundTagSt14default_deleteIS1_EERK14ItemDescriptor
    virtual bool isTintable()const; // _ZNK18FireworkChargeItem10isTintableEv
    virtual bool isSameItem(ItemStackBase const&, ItemStackBase const&)const; // _ZNK18FireworkChargeItem10isSameItemERK13ItemStackBaseS2_
    FireworkChargeItem(std::string const&, int); // _ZN18FireworkChargeItemC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEi
    void getFormattedHoverText(CompoundTag const&, std::string &, std::string const&); // _ZN18FireworkChargeItem21getFormattedHoverTextERK11CompoundTagRNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERKS8_
    void appendColors(std::string &, std::vector<unsigned char>); // _ZN18FireworkChargeItem12appendColorsERNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt6vectorIhSaIhEE
    void setColor(ItemInstance &)const; // _ZNK18FireworkChargeItem8setColorER12ItemInstance
    void setColor(ItemStack &)const; // _ZNK18FireworkChargeItem8setColorER9ItemStack
//  void initFireworkChargeItem(ItemInstance &, FireworkChargeItem::Shape, std::vector<unsigned char>, std::vector<unsigned char>, bool, bool); //TODO: incomplete function definition // _ZN18FireworkChargeItem22initFireworkChargeItemER12ItemInstanceNS_5ShapeESt6vectorIhSaIhEES5_bb
//  void initFireworkChargeItem(ItemStack &, FireworkChargeItem::Shape, std::vector<unsigned char>, std::vector<unsigned char>, bool, bool); //TODO: incomplete function definition // _ZN18FireworkChargeItem22initFireworkChargeItemER9ItemStackNS_5ShapeESt6vectorIhSaIhEES5_bb
};
