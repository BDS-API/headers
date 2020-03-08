#pragma once



class ChemistryItem : Item {

public:
    ChemistryItem::~ChemistryItem()
    virtual void fixupOnLoad(ItemStackBase &)const;

    void validate(ItemStackBase &);
};
