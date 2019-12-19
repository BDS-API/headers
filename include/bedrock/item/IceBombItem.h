#pragma once

class IceBombItem : ChemistryItem {

public:
    virtual IceBombItem::~IceBombItem();
    virtual bool isThrowable(void)const;
    virtual void use(ItemStack &, Player &)const;
    virtual void dispense(BlockSource &, Container &, int, Vec3 const&, unsigned char)const;
    virtual void getCooldownType(void)const;
    virtual void getCooldownTime(void)const;

    IceBombItem(std::string const&, int);
};
