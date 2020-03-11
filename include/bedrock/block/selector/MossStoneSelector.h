#pragma once

#include "../../util/Random.h"
#include "./BlockSelector.h"


class MossStoneSelector : BlockSelector {

public:
    virtual ~MossStoneSelector();
    virtual void next(Random &, int, int, int, bool)const;

    MossStoneSelector();
};
