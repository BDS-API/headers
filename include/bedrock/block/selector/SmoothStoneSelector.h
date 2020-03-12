#pragma once

#include "BlockSelector.h"


class SmoothStoneSelector : BlockSelector {

public:
    virtual void next(Random &, int, int, int, bool)const;
    ~SmoothStoneSelector();
    SmoothStoneSelector();
};
