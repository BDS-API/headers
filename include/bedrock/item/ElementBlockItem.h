#pragma once

#include "./ChemistryAuxDataBlockItem.h"
#include "./ItemStackBase.h"


class ElementBlockItem : ChemistryAuxDataBlockItem {

public:
    virtual ~ElementBlockItem();
    virtual void fixupOnLoad(ItemStackBase &)const;

};
