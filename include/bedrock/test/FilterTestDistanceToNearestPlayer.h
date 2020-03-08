#pragma once

#include "../../unmapped/FilterContext"


class FilterTestDistanceToNearestPlayer : SimpleFloatFilterTest {

public:
    FilterTestDistanceToNearestPlayer::~FilterTestDistanceToNearestPlayer()
    virtual void evaluate(FilterContext const&)const;
    virtual void getName()const;

    FilterTestDistanceToNearestPlayer(void);
};
