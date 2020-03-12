#pragma once

#include "ChemistryAuxDataBlockItem.h"


class ElementBlockItem : ChemistryAuxDataBlockItem {

public:
    virtual void fixupOnLoad(ItemStackBase &)const;
    ~ElementBlockItem();
};
