#pragma once

#include "AuxDataBlockItem.h"
#include "ItemStackBase.h"


class ChemistryAuxDataBlockItem : AuxDataBlockItem {

public:
    ~ChemistryAuxDataBlockItem();
    virtual void fixupOnLoad(ItemStackBase &)const;
};
