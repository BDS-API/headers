#pragma once

#include "./Item.h"
#include "../level/Level.h"
#include "../actor/Actor.h"
#include "../actor/Player.h"
#include "./ItemStack.h"
#include <string>


class SuspiciousStewItem : Item {

public:
    virtual ~SuspiciousStewItem();
    virtual void uniqueAuxValues()const;
    virtual void useTimeDepleted(ItemStack &, Level *, Player *)const;

    void _getStewEffects();
    SuspiciousStewItem(std::string const&, short);
    void applyStewEffect(ItemStack const&, Actor &);
};
