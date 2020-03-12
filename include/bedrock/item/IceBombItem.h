#pragma once

#include <string>
#include "ChemistryItem.h"


class IceBombItem : ChemistryItem {

public:
    ~IceBombItem();
    virtual void getCooldownTime()const;
    virtual void dispense(BlockSource &, Container &, int, Vec3 const&, unsigned char)const;
    virtual void getCooldownType()const;
    virtual void use(ItemStack &, Player &)const;
    virtual bool isThrowable()const;
    IceBombItem(std::string const&, int);
};
