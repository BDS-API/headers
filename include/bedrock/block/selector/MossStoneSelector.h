#pragma once

#include "../../util/Random"


class MossStoneSelector : BlockSelector {

public:
    MossStoneSelector::~MossStoneSelector()
    virtual void next(Random &, int, int, int, bool)const;

    MossStoneSelector(void);
};
