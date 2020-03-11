#pragma once

#include "../block/unmapped/BlockSource.h"
#include "./ChemistryItem.h"
#include "../util/Vec3.h"
#include "../actor/Player.h"
#include "./ItemStack.h"
#include "../container/Container.h"
#include <string>


class IceBombItem : ChemistryItem {

public:
    virtual ~IceBombItem();
    virtual bool isThrowable()const;
    virtual void use(ItemStack &, Player &)const;
    virtual void dispense(BlockSource &, Container &, int, Vec3 const&, unsigned char)const;
    virtual void getCooldownType()const;
    virtual void getCooldownTime()const;

    IceBombItem(std::string const&, int);
};
