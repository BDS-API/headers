#pragma once

class ShovelItem : DiggerItem {

public:
    virtual ~ShovelItem();
    virtual bool canDestroySpecial(Block const&)const;
    virtual void getEnchantSlot(void)const;
    virtual void _useOn(ItemStack &, Actor &, BlockPos, unsigned char, float, float, float)const;

    void ShovelItem(std::string const&, int, Item::Tier const&);
};
