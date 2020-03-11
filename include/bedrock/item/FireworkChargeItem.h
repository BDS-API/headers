#pragma once

#include <string>
#include "./ItemStackBase.h"
#include <memory>
#include "./ItemInstance.h"
#include "./Item.h"
#include "../level/Level.h"
#include <vector>
#include "../nbt/CompoundTag.h"
#include "./ItemStack.h"
#include "unmapped/ItemDescriptor.h"


class FireworkChargeItem : Item {

public:
    static std::string TAG_EXPLOSION;
    static std::string TAG_E_TYPE;
    static std::string TAG_E_COLORS;
    static std::string TAG_E_FADECOLORS;
    static std::string TAG_E_TRAIL;
    static std::string TAG_E_FLICKER;

    virtual ~FireworkChargeItem();
    virtual void appendFormattedHovertext(ItemStackBase const&, Level &, std::string &, bool)const;
    virtual void getColor(std::unique_ptr<CompoundTag, std::default_delete<CompoundTag>> const&, ItemDescriptor const&)const;
    virtual bool isTintable()const;
    virtual bool isSameItem(ItemStackBase const&, ItemStackBase const&)const;

    FireworkChargeItem(std::string const&, int);
    void getFormattedHoverText(CompoundTag const&, std::string &, std::string const&);
    void appendColors(std::string &, std::vector<unsigned char, std::allocator<unsigned char>>);
    void setColor(ItemInstance &)const;
    void setColor(ItemStack &)const;
//  void initFireworkChargeItem(ItemInstance &, FireworkChargeItem::Shape, std::vector<unsigned char, std::allocator<unsigned char>>, std::vector<unsigned char, std::allocator<unsigned char>>, bool, bool); //TODO: incomplete function definition
//  void initFireworkChargeItem(ItemStack &, FireworkChargeItem::Shape, std::vector<unsigned char, std::allocator<unsigned char>>, std::vector<unsigned char, std::allocator<unsigned char>>, bool, bool); //TODO: incomplete function definition
};
