#pragma once

#include <string>
#include "Item.h"


class SnowballItem : Item {

public:
    virtual void use(ItemStack &, Player &)const;
    ~SnowballItem();
    virtual void dispense(BlockSource &, Container &, int, Vec3 const&, unsigned char)const;
    virtual bool isThrowable()const;
    SnowballItem(std::string const&, int);
};
