#pragma once

#include "ItemStack.h"
#include <string>
#include "../actor/Actor.h"
#include "ItemInstance.h"
#include "../../unmapped/Block.h"
#include <vector>
#include "ItemStackBase.h"
#include "Item.h"
#include "../level/Level.h"


class DiggerItem : Item {

public:
    virtual void getAttackDamage()const;
    virtual bool isHandEquipped()const;
    ~DiggerItem();
    virtual void getDestroySpeed(ItemInstance const&, Block const&)const;
    virtual void appendFormattedHovertext(ItemStackBase const&, Level &, std::string &, bool)const;
    virtual bool isValidRepairItem(ItemInstance const&, ItemInstance const&)const;
    virtual void getEnchantValue()const;
    virtual void mineBlock(ItemStack &, Block const&, int, int, int, Actor *)const;
    void setBlocks(std::vector<Block const*> const&);
    DiggerItem(std::string const&, int, int, Item::Tier const&, std::vector<Block const*> const&);
    bool hasBlock(Block const&)const;
};
