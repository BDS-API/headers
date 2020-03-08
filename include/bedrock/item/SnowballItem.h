#pragma once

#include "../block/unmapped/BlockSource"
#include "../actor/Player"
#include "../util/Vec3"
#include "../container/Container"


class SnowballItem : Item {

public:
    virtual SnowballItem::~SnowballItem()
    virtual bool isThrowable()const;
    virtual void use(ItemStack &, Player &)const;
    virtual void dispense(BlockSource &, Container &, int, Vec3 const&, unsigned char)const;

    SnowballItem(std::string const&, int);
};
