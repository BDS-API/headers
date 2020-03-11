#pragma once

#include "../block/unmapped/BlockSource.h"
#include "./ItemStackBase.h"
#include "../container/Container.h"
#include "./Item.h"
#include "../util/Vec3.h"
#include "../actor/Player.h"
#include "./ItemStack.h"
#include <string>


class ExperiencePotionItem : Item {

public:
    virtual ~ExperiencePotionItem();
    virtual bool isGlint(ItemStackBase const&)const;
    virtual bool isThrowable()const;
    virtual void use(ItemStack &, Player &)const;
    virtual void dispense(BlockSource &, Container &, int, Vec3 const&, unsigned char)const;

    ExperiencePotionItem(std::string const&, int);
};
