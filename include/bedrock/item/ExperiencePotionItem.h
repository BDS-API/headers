#pragma once

#include "ItemStack.h"
#include <string>
#include "../util/Vec3.h"
#include "../actor/Player.h"
#include "../container/Container.h"
#include "ItemStackBase.h"
#include "Item.h"
#include "../block/unmapped/BlockSource.h"


class ExperiencePotionItem : Item {

public:
    virtual bool isGlint(ItemStackBase const&)const;
    ~ExperiencePotionItem();
    virtual void use(ItemStack &, Player &)const;
    virtual void dispense(BlockSource &, Container &, int, Vec3 const&, unsigned char)const;
    virtual bool isThrowable()const;
    ExperiencePotionItem(std::string const&, int);
};
