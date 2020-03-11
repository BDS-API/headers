#pragma once

#include "./BlockItem.h"
#include "./ItemStackBase.h"


class ChemistryBlockItem : BlockItem {

public:
    virtual ~ChemistryBlockItem();
    virtual void fixupOnLoad(ItemStackBase &)const;

};
