#pragma once

class RapidFertilizerItem : FertilizerItem {

public:
    virtual ~RapidFertilizerItem();
    virtual void fixupOnLoad(ItemStackBase &)const;

};
