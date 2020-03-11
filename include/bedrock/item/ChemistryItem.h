#pragma once

#include "./Item.h"
#include "./ItemStackBase.h"


class ChemistryItem : Item {

public:
    virtual ~ChemistryItem();
    virtual void fixupOnLoad(ItemStackBase &)const;

    void validate(ItemStackBase &);
};
