#pragma once

class ChemistryAuxDataBlockItem : AuxDataBlockItem {

public:
    virtual ~ChemistryAuxDataBlockItem();
    virtual void fixupOnLoad(ItemStackBase &)const;

};
