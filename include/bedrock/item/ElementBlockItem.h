#pragma once



class ElementBlockItem : ChemistryAuxDataBlockItem {

public:
    virtual ElementBlockItem::~ElementBlockItem()
    virtual void fixupOnLoad(ItemStackBase &)const;

};
