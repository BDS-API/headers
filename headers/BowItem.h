#pragma once

class BowItem : RangedWeaponItem {

public:
    virtual ~BowItem();
    virtual void getEnchantSlot(void)const;
    virtual void getIcon(ItemStackBase const&, int, bool)const;
    virtual void setIcon(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, int);

    void BowItem(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, int);
};
