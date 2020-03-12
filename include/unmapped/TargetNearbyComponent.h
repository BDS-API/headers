#pragma once

#include "../bedrock/actor/Actor.h"


class TargetNearbyComponent {

public:
    void getWasOutsideRange()const;
    void getWasInsideRange()const;
    TargetNearbyComponent();
    void setWasSeenLastTick(bool);
    TargetNearbyComponent(TargetNearbyComponent &&);
    void initFromDefinition(Actor &);
    void setWasInsideRange(bool);
    void setPreviousDistance(float);
    void setWasOutsideRange(bool);
    void getPreviousDistance()const;
    void getWasSeenLastTick()const;
};
