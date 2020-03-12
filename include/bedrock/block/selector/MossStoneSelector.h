#pragma once

#include "BlockSelector.h"
#include "../../util/Random.h"


class MossStoneSelector : BlockSelector {

public:
    virtual void next(Random &, int, int, int, bool)const;
    ~MossStoneSelector();
    MossStoneSelector();
};
