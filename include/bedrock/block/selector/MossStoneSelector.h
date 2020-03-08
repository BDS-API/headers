#pragma once

#include "../../util/Random"


class MossStoneSelector : BlockSelector {

public:
    virtual MossStoneSelector::~MossStoneSelector()
    virtual void next(Random &, int, int, int, bool)const;

    MossStoneSelector(void);
};
