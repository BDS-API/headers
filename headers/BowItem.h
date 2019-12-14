#pragma once

class BowItem : RangedWeaponItem {

public:
    virtual ~BowItem();
    virtual void getEnchantSlot(void)const;
    virtual void getIcon(ItemStackBase const&, int, bool)const;
    virtual void setIcon(std::string const&, int);

    void BowItem(std::string const&, int);
};
