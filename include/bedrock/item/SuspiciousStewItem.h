#pragma once

#include "ItemStack.h"
#include <string>
#include "../actor/Actor.h"
#include "../actor/Player.h"
#include "Item.h"
#include "../level/Level.h"


class SuspiciousStewItem : Item {

public:
    ~SuspiciousStewItem();
    virtual void uniqueAuxValues()const;
    virtual void useTimeDepleted(ItemStack &, Level *, Player *)const;
    SuspiciousStewItem(std::string const&, short);
    void applyStewEffect(ItemStack const&, Actor &);
    void _getStewEffects();
};
