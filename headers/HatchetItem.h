#pragma once

class HatchetItem : DiggerItem {

public:
    virtual ~HatchetItem();
    virtual void getEnchantSlot(void)const;
    virtual void getDestroySpeed(ItemInstance const&, Block const&)const;
    virtual void _useOn(ItemStack &, Actor &, BlockPos, unsigned char, float, float, float)const;

    void HatchetItem(std::string const&, int, Item::Tier const&);
};
