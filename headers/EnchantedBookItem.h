#pragma once

class EnchantedBookItem : Item {

public:
    virtual ~EnchantedBookItem();
    virtual bool isGlint(ItemStackBase const&)const;
    virtual void getEnchantSlot(void)const;
    virtual void getEnchantValue(void)const;

    void EnchantedBookItem(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, int, bool);
};
