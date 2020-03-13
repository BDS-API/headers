#pragma once

#include "BlockSelector.h"


class SmoothStoneSelector : BlockSelector {

public:
    ~SmoothStoneSelector(); // _ZN19SmoothStoneSelectorD2Ev
    virtual void next(Random &, int, int, int, bool)const; // _ZNK19SmoothStoneSelector4nextER6Randomiiib
    SmoothStoneSelector(); // _ZN19SmoothStoneSelectorC2Ev
};
