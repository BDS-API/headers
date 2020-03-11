#pragma once

#include "./ItemStackBase.h"
#include "./AuxDataBlockItem.h"


class ChemistryAuxDataBlockItem : AuxDataBlockItem {

public:
    virtual ~ChemistryAuxDataBlockItem();
    virtual void fixupOnLoad(ItemStackBase &)const;

};
