#pragma once

class MossStoneSelector : BlockSelector {

public:
    virtual MossStoneSelector::~MossStoneSelector();
    virtual void next(Random &, int, int, int, bool)const;

    MossStoneSelector(void);
};