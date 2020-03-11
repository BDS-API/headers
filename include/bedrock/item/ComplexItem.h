#pragma once

#include "./Item.h"
#include "../level/Level.h"
#include "../actor/Actor.h"
#include "./ItemStack.h"
#include <string>


class ComplexItem : Item {

public:
    virtual ~ComplexItem();
    virtual bool isComplex()const;
    virtual void getUpdatePacket(ItemStack const&, Level &, Actor &)const;

    ComplexItem(std::string const&, int);
};
