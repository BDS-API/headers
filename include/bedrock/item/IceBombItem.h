#pragma once

#include "../container/Container"
#include "../util/Vec3"
#include "../block/unmapped/BlockSource"
#include "../actor/Player"


class IceBombItem : ChemistryItem {

public:
    IceBombItem::~IceBombItem()
    virtual bool isThrowable()const;
    virtual void use(ItemStack &, Player &)const;
    virtual void dispense(BlockSource &, Container &, int, Vec3 const&, unsigned char)const;
    virtual void getCooldownType()const;
    virtual void getCooldownTime()const;

    IceBombItem(std::string const&, int);
};
