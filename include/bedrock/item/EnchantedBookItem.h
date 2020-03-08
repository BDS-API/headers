#pragma once



class EnchantedBookItem : Item {

public:
    virtual EnchantedBookItem::~EnchantedBookItem()
    virtual bool isGlint(ItemStackBase const&)const;
    virtual void getEnchantSlot()const;
    virtual void getEnchantValue()const;

    EnchantedBookItem(std::string const&, int, bool);
};
