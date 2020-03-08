#pragma once

#include "../block/unmapped/BlockSource"
#include "../actor/Player"
#include "../util/Vec3"
#include "../container/Container"


class EggItem : Item {

public:
    virtual EggItem::~EggItem()
    virtual bool isThrowable()const;
    virtual void use(ItemStack &, Player &)const;
    virtual void dispense(BlockSource &, Container &, int, Vec3 const&, unsigned char)const;

    EggItem(std::string const&, int);
};
