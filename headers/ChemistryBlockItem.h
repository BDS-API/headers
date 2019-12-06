#pragma once

class ChemistryBlockItem : BlockItem {

public:
    virtual ~ChemistryBlockItem();
    virtual void fixupOnLoad(ItemStackBase &)const;

};
