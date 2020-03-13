#pragma once

#include "BlockItem.h"


class ChemistryBlockItem : BlockItem {

public:
    ~ChemistryBlockItem(); // _ZN18ChemistryBlockItemD2Ev
    virtual void fixupOnLoad(ItemStackBase &)const; // _ZNK18ChemistryBlockItem11fixupOnLoadER13ItemStackBase
};
