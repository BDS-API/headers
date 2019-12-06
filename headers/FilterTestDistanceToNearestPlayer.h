#pragma once

class FilterTestDistanceToNearestPlayer : SimpleFloatFilterTest {

public:
    virtual ~FilterTestDistanceToNearestPlayer();
    virtual void evaluate(FilterContext const&)const;
    virtual void getName(void)const;

    void FilterTestDistanceToNearestPlayer(void);
};
