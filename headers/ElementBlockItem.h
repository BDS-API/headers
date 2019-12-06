#pragma once

class ElementBlockItem : ChemistryAuxDataBlockItem {

public:
    virtual ~ElementBlockItem();
    virtual void fixupOnLoad(ItemStackBase &)const;

};
