#pragma once

#include "BlockItem.h"
#include "ItemStackBase.h"


class ChemistryBlockItem : BlockItem {

public:
    ~ChemistryBlockItem();
    virtual void fixupOnLoad(ItemStackBase &)const;
};
