#pragma once

#include "../actor/Actor"
#include "../level/Level"
#include "../actor/Player"


class SuspiciousStewItem : Item {

public:
    virtual SuspiciousStewItem::~SuspiciousStewItem()
    virtual void uniqueAuxValues()const;
    virtual void useTimeDepleted(ItemStack &, Level *, Player *)const;

    void _getStewEffects();
    SuspiciousStewItem(std::string const&, short);
    void applyStewEffect(ItemStack const&, Actor &);
};
