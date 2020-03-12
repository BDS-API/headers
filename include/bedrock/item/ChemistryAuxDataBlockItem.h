#pragma once

#include "AuxDataBlockItem.h"


class ChemistryAuxDataBlockItem : AuxDataBlockItem {

public:
    ~ChemistryAuxDataBlockItem();
    virtual void fixupOnLoad(ItemStackBase &)const;
};
