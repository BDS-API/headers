#pragma once

#include "FertilizerItem.h"
#include "ItemStackBase.h"


class RapidFertilizerItem : FertilizerItem {

public:
    virtual void fixupOnLoad(ItemStackBase &)const;
    ~RapidFertilizerItem();
};
