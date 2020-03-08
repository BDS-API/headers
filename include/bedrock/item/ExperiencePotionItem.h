#pragma once

#include "../container/Container"
#include "../util/Vec3"
#include "../block/unmapped/BlockSource"
#include "../actor/Player"


class ExperiencePotionItem : Item {

public:
    ExperiencePotionItem::~ExperiencePotionItem()
    virtual bool isGlint(ItemStackBase const&)const;
    virtual bool isThrowable()const;
    virtual void use(ItemStack &, Player &)const;
    virtual void dispense(BlockSource &, Container &, int, Vec3 const&, unsigned char)const;

    ExperiencePotionItem(std::string const&, int);
};
