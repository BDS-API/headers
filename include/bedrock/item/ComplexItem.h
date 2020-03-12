#pragma once

#include <string>
#include "ItemStack.h"
#include "../actor/Actor.h"
#include "Item.h"
#include "../level/Level.h"


class ComplexItem : Item {

public:
    ~ComplexItem();
    virtual void getUpdatePacket(ItemStack const&, Level &, Actor &)const;
    virtual bool isComplex()const;
    ComplexItem(std::string const&, int);
};
