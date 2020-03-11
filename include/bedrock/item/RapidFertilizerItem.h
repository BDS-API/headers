#pragma once

#include "./FertilizerItem.h"
#include "./ItemStackBase.h"


class RapidFertilizerItem : FertilizerItem {

public:
    virtual ~RapidFertilizerItem();
    virtual void fixupOnLoad(ItemStackBase &)const;

};
