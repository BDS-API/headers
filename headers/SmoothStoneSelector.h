#pragma once

class SmoothStoneSelector : BlockSelector {

public:
    virtual ~SmoothStoneSelector();
    virtual void next(Random &, int, int, int, bool)const;

    void SmoothStoneSelector(void);
};
