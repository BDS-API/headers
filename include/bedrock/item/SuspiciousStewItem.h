#pragma once

#include "../actor/Actor"
#include "../actor/Player"
#include "../level/Level"


class SuspiciousStewItem : Item {

public:
    SuspiciousStewItem::~SuspiciousStewItem()
    virtual void uniqueAuxValues()const;
    virtual void useTimeDepleted(ItemStack &, Level *, Player *)const;

    void _getStewEffects();
    SuspiciousStewItem(std::string const&, short);
    void applyStewEffect(ItemStack const&, Actor &);
};
