#pragma once

#include <string>
#include "Item.h"


class ExperiencePotionItem : Item {

public:
    ~ExperiencePotionItem();
    virtual bool isThrowable()const;
    virtual void dispense(BlockSource &, Container &, int, Vec3 const&, unsigned char)const;
    virtual void use(ItemStack &, Player &)const;
    virtual bool isGlint(ItemStackBase const&)const;
    ExperiencePotionItem(std::string const&, int);
};
