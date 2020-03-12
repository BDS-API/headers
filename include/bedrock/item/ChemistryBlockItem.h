#pragma once

#include "BlockItem.h"


class ChemistryBlockItem : BlockItem {

public:
    ~ChemistryBlockItem();
    virtual void fixupOnLoad(ItemStackBase &)const;
};
