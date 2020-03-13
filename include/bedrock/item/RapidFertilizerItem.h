#pragma once

#include "FertilizerItem.h"


class RapidFertilizerItem : FertilizerItem {

public:
    ~RapidFertilizerItem(); // _ZN19RapidFertilizerItemD2Ev
    virtual void fixupOnLoad(ItemStackBase &)const; // _ZNK19RapidFertilizerItem11fixupOnLoadER13ItemStackBase
};
