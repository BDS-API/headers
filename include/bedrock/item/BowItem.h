#pragma once



class BowItem : RangedWeaponItem {

public:
    virtual BowItem::~BowItem()
    virtual void getEnchantSlot()const;
    virtual void getIcon(ItemStackBase const&, int, bool)const;
    virtual void setIcon(std::string const&, int);

    BowItem(std::string const&, int);
};
