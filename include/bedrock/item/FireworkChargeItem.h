#pragma once

#include "Item.h"
#include "ItemStack.h"
#include <string>
#include "../nbt/CompoundTag.h"
#include <vector>
#include "ItemStackBase.h"
#include <memory>
#include "ItemInstance.h"
#include "../level/Level.h"
#include "unmapped/ItemDescriptor.h"


class FireworkChargeItem : Item {

public:
    static std::string TAG_EXPLOSION;
    static std::string TAG_E_TYPE;
    static std::string TAG_E_COLORS;
    static std::string TAG_E_FADECOLORS;
    static std::string TAG_E_TRAIL;
    static std::string TAG_E_FLICKER;

    virtual void appendFormattedHovertext(ItemStackBase const&, Level &, std::string &, bool)const;
    virtual void getColor(std::unique_ptr<CompoundTag> const&, ItemDescriptor const&)const;
    virtual bool isSameItem(ItemStackBase const&, ItemStackBase const&)const;
    ~FireworkChargeItem();
    virtual bool isTintable()const;
    void setColor(ItemInstance &)const;
//  void initFireworkChargeItem(ItemInstance &, FireworkChargeItem::Shape, std::vector<unsigned char>, std::vector<unsigned char>, bool, bool); //TODO: incomplete function definition
    void setColor(ItemStack &)const;
    void getFormattedHoverText(CompoundTag const&, std::string &, std::string const&);
    void appendColors(std::string &, std::vector<unsigned char>);
    FireworkChargeItem(std::string const&, int);
//  void initFireworkChargeItem(ItemStack &, FireworkChargeItem::Shape, std::vector<unsigned char>, std::vector<unsigned char>, bool, bool); //TODO: incomplete function definition
};
