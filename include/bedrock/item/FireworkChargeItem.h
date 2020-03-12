#pragma once

#include <memory>
#include "Item.h"
#include <string>
#include <vector>


class FireworkChargeItem : Item {

public:
    static std::string TAG_EXPLOSION;
    static std::string TAG_E_TYPE;
    static std::string TAG_E_COLORS;
    static std::string TAG_E_FADECOLORS;
    static std::string TAG_E_TRAIL;
    static std::string TAG_E_FLICKER;

    virtual void appendFormattedHovertext(ItemStackBase const&, Level &, std::string &, bool)const;
    ~FireworkChargeItem();
    virtual void getColor(std::unique_ptr<CompoundTag> const&, ItemDescriptor const&)const;
    virtual bool isTintable()const;
    virtual bool isSameItem(ItemStackBase const&, ItemStackBase const&)const;
    void appendColors(std::string &, std::vector<unsigned char>);
    void getFormattedHoverText(CompoundTag const&, std::string &, std::string const&);
    void setColor(ItemStack &)const;
    FireworkChargeItem(std::string const&, int);
//  void initFireworkChargeItem(ItemStack &, FireworkChargeItem::Shape, std::vector<unsigned char>, std::vector<unsigned char>, bool, bool); //TODO: incomplete function definition
//  void initFireworkChargeItem(ItemInstance &, FireworkChargeItem::Shape, std::vector<unsigned char>, std::vector<unsigned char>, bool, bool); //TODO: incomplete function definition
    void setColor(ItemInstance &)const;
};
