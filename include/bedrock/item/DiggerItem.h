#pragma once

#include "unmapped/Tier"
#include "../level/Level"
#include "../actor/Actor"
#include "../../unmapped/Block"


class DiggerItem : Item {

public:
    DiggerItem::~DiggerItem()
    virtual void getAttackDamage()const;
    virtual bool isHandEquipped()const;
    virtual void appendFormattedHovertext(ItemStackBase const&, Level &, std::string &, bool)const;
    virtual bool isValidRepairItem(ItemInstance const&, ItemInstance const&)const;
    virtual void getEnchantValue()const;
    virtual void getDestroySpeed(ItemInstance const&, Block const&)const;
    virtual void mineBlock(ItemStack &, Block const&, int, int, int, Actor *)const;

    bool hasBlock(Block const&)const;
    void setBlocks(std::vector<Block const*, std::allocator<Block const*>> const&);
    DiggerItem(std::string const&, int, int, Item::Tier const&, std::vector<Block const*, std::allocator<Block const*>> const&);
};
