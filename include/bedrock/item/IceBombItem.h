#pragma once

#include "ChemistryItem.h"
#include "ItemStack.h"
#include <string>
#include "../util/Vec3.h"
#include "../actor/Player.h"
#include "../container/Container.h"
#include "../block/unmapped/BlockSource.h"


class IceBombItem : ChemistryItem {

public:
    virtual void dispense(BlockSource &, Container &, int, Vec3 const&, unsigned char)const;
    virtual bool isThrowable()const;
    virtual void use(ItemStack &, Player &)const;
    virtual void getCooldownTime()const;
    ~IceBombItem();
    virtual void getCooldownType()const;
    IceBombItem(std::string const&, int);
};
