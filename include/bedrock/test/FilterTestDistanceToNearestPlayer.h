#pragma once

class FilterTestDistanceToNearestPlayer : SimpleFloatFilterTest {

public:
    virtual FilterTestDistanceToNearestPlayer::~FilterTestDistanceToNearestPlayer();
    virtual void evaluate(FilterContext const&)const;
    virtual void getName(void)const;

    FilterTestDistanceToNearestPlayer(void);
};