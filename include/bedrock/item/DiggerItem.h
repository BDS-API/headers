#pragma once

#include <string>
#include "Item.h"
#include <vector>


class DiggerItem : Item {

public:
    virtual void getEnchantValue()const;
    virtual void mineBlock(ItemStack &, Block const&, int, int, int, Actor *)const;
    ~DiggerItem();
    virtual void getAttackDamage()const;
    virtual bool isHandEquipped()const;
    virtual void getDestroySpeed(ItemInstance const&, Block const&)const;
    virtual void appendFormattedHovertext(ItemStackBase const&, Level &, std::string &, bool)const;
    virtual bool isValidRepairItem(ItemInstance const&, ItemInstance const&)const;
    void setBlocks(std::vector<Block const*> const&);
    DiggerItem(std::string const&, int, int, Item::Tier const&, std::vector<Block const*> const&);
    bool hasBlock(Block const&)const;
};
