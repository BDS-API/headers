#pragma once

#include "Item.h"


class ChemistryItem : public Item {

public:
    virtual ~ChemistryItem(); // _ZN13ChemistryItemD2Ev
    virtual void __fake_function0(); // fake
    virtual void fixupOnLoad(ItemStackBase &)const; // _ZNK13ChemistryItem11fixupOnLoadER13ItemStackBase
    void validate(ItemStackBase &); // _ZN13ChemistryItem8validateER13ItemStackBase
};
