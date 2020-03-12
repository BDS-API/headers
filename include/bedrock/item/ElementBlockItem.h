#pragma once

#include "ItemStackBase.h"
#include "ChemistryAuxDataBlockItem.h"


class ElementBlockItem : ChemistryAuxDataBlockItem {

public:
    virtual void fixupOnLoad(ItemStackBase &)const;
    ~ElementBlockItem();
};
