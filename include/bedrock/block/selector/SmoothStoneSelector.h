#pragma once

#include "BlockSelector.h"
#include "../../util/Random.h"


class SmoothStoneSelector : BlockSelector {

public:
    ~SmoothStoneSelector();
    virtual void next(Random &, int, int, int, bool)const;
    SmoothStoneSelector();
};
