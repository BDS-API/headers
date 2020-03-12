#pragma once

#include "Item.h"
#include "ItemStackBase.h"


class ChemistryItem : Item {

public:
    virtual void fixupOnLoad(ItemStackBase &)const;
    ~ChemistryItem();
    void validate(ItemStackBase &);
};
