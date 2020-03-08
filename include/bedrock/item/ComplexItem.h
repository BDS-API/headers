#pragma once

#include "../actor/Actor"
#include "../level/Level"


class ComplexItem : Item {

public:
    virtual ComplexItem::~ComplexItem()
    virtual bool isComplex()const;
    virtual void getUpdatePacket(ItemStack const&, Level &, Actor &)const;

    ComplexItem(std::string const&, int);
};
