#pragma once

#include "../../util/Random"


class SmoothStoneSelector : BlockSelector {

public:
    virtual SmoothStoneSelector::~SmoothStoneSelector()
    virtual void next(Random &, int, int, int, bool)const;

    SmoothStoneSelector(void);
};
