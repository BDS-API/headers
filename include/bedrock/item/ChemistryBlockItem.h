#pragma once



class ChemistryBlockItem : BlockItem {

public:
    virtual ChemistryBlockItem::~ChemistryBlockItem()
    virtual void fixupOnLoad(ItemStackBase &)const;

};
