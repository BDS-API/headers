#pragma once

class ChemistryItem : Item {

public:
    virtual ~ChemistryItem();
    virtual void fixupOnLoad(ItemStackBase &)const;

    void validate(ItemStackBase &);
};
