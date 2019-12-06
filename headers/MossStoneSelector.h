#pragma once

class MossStoneSelector : BlockSelector {

public:
    virtual ~MossStoneSelector();
    virtual void next(Random &, int, int, int, bool)const;

    void MossStoneSelector(void);
};
