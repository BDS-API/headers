#pragma once

#include "../block/unmapped/BlockSource"
#include "../actor/Player"
#include "../util/Vec3"
#include "../container/Container"


class ExperiencePotionItem : Item {

public:
    virtual ExperiencePotionItem::~ExperiencePotionItem()
    virtual bool isGlint(ItemStackBase const&)const;
    virtual bool isThrowable()const;
    virtual void use(ItemStack &, Player &)const;
    virtual void dispense(BlockSource &, Container &, int, Vec3 const&, unsigned char)const;

    ExperiencePotionItem(std::string const&, int);
};
