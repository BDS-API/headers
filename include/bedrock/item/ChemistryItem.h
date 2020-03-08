#pragma once



class ChemistryItem : Item {

public:
    virtual ChemistryItem::~ChemistryItem()
    virtual void fixupOnLoad(ItemStackBase &)const;

    void validate(ItemStackBase &);
};
