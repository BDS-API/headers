#pragma once

#include <string>
#include "Item.h"


class EggItem : Item {

public:
    virtual void use(ItemStack &, Player &)const;
    ~EggItem();
    virtual bool isThrowable()const;
    virtual void dispense(BlockSource &, Container &, int, Vec3 const&, unsigned char)const;
    EggItem(std::string const&, int);
};
