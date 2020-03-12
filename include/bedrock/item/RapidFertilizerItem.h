#pragma once

#include "FertilizerItem.h"


class RapidFertilizerItem : FertilizerItem {

public:
    ~RapidFertilizerItem();
    virtual void fixupOnLoad(ItemStackBase &)const;
};
