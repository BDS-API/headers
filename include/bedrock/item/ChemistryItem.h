#pragma once

#include "Item.h"


class ChemistryItem : Item {

public:
    ~ChemistryItem();
    virtual void fixupOnLoad(ItemStackBase &)const;
    void validate(ItemStackBase &);
};
