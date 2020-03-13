#pragma once

#include "AuxDataBlockItem.h"


class ChemistryAuxDataBlockItem : AuxDataBlockItem {

public:
    ~ChemistryAuxDataBlockItem(); // _ZN25ChemistryAuxDataBlockItemD2Ev
    virtual void fixupOnLoad(ItemStackBase &)const; // _ZNK25ChemistryAuxDataBlockItem11fixupOnLoadER13ItemStackBase
};
