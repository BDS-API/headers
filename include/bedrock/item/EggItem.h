#pragma once

#include "../container/Container"
#include "../util/Vec3"
#include "../block/unmapped/BlockSource"
#include "../actor/Player"


class EggItem : Item {

public:
    EggItem::~EggItem()
    virtual bool isThrowable()const;
    virtual void use(ItemStack &, Player &)const;
    virtual void dispense(BlockSource &, Container &, int, Vec3 const&, unsigned char)const;

    EggItem(std::string const&, int);
};
