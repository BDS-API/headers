#pragma once

class EnchantedBookItem : Item {

public:
    virtual ~EnchantedBookItem();
    virtual bool isGlint(ItemStackBase const&)const;
    virtual void getEnchantSlot(void)const;
    virtual void getEnchantValue(void)const;

    void EnchantedBookItem(std::string const&, int, bool);
};
