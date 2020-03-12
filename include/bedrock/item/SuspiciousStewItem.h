#pragma once

#include <string>
#include "Item.h"


class SuspiciousStewItem : Item {

public:
    virtual void uniqueAuxValues()const;
    virtual void useTimeDepleted(ItemStack &, Level *, Player *)const;
    ~SuspiciousStewItem();
    void applyStewEffect(ItemStack const&, Actor &);
    void _getStewEffects();
    SuspiciousStewItem(std::string const&, short);
};
