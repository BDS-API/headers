#pragma once



class ChemistryAuxDataBlockItem : AuxDataBlockItem {

public:
    virtual ChemistryAuxDataBlockItem::~ChemistryAuxDataBlockItem()
    virtual void fixupOnLoad(ItemStackBase &)const;

};
