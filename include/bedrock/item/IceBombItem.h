#pragma once

#include "../block/unmapped/BlockSource"
#include "../actor/Player"
#include "../util/Vec3"
#include "../container/Container"


class IceBombItem : ChemistryItem {

public:
    virtual IceBombItem::~IceBombItem()
    virtual bool isThrowable()const;
    virtual void use(ItemStack &, Player &)const;
    virtual void dispense(BlockSource &, Container &, int, Vec3 const&, unsigned char)const;
    virtual void getCooldownType()const;
    virtual void getCooldownTime()const;

    IceBombItem(std::string const&, int);
};
