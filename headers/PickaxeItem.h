#pragma once

class PickaxeItem : DiggerItem {

public:
    virtual ~PickaxeItem();
    virtual bool canDestroySpecial(Block const&)const;
    virtual void getEnchantSlot(void)const;
    virtual void getDestroySpeed(ItemInstance const&, Block const&)const;

    void PickaxeItem(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, int, Item::Tier const&);
};
