#pragma once

class ShovelItem : DiggerItem {

public:
    virtual ~ShovelItem();
    virtual bool canDestroySpecial(Block const&)const;
    virtual void getEnchantSlot(void)const;
    virtual void _useOn(ItemStack &, Actor &, BlockPos, unsigned char, float, float, float)const;

    void ShovelItem(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, int, Item::Tier const&);
};
