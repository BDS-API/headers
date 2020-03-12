#pragma once

#include <string>
#include "Item.h"


class ComplexItem : Item {

public:
    virtual void getUpdatePacket(ItemStack const&, Level &, Actor &)const;
    ~ComplexItem();
    virtual bool isComplex()const;
    ComplexItem(std::string const&, int);
};
