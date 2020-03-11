#pragma once

#include "../../util/Random.h"
#include "./BlockSelector.h"


class SmoothStoneSelector : BlockSelector {

public:
    virtual ~SmoothStoneSelector();
    virtual void next(Random &, int, int, int, bool)const;

    SmoothStoneSelector();
};
