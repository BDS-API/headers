#pragma once



class RapidFertilizerItem : FertilizerItem {

public:
    virtual RapidFertilizerItem::~RapidFertilizerItem()
    virtual void fixupOnLoad(ItemStackBase &)const;

};
