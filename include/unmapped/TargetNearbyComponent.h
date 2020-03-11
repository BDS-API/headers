#pragma once

#include "../bedrock/actor/Actor.h"
#include "./TargetNearbyComponent.h"


class TargetNearbyComponent {

public:

    TargetNearbyComponent(TargetNearbyComponent &&);
    TargetNearbyComponent();
    void initFromDefinition(Actor &);
    void getWasSeenLastTick()const;
    void getWasInsideRange()const;
    void getWasOutsideRange()const;
    void getPreviousDistance()const;
    void setWasSeenLastTick(bool);
    void setWasInsideRange(bool);
    void setWasOutsideRange(bool);
    void setPreviousDistance(float);
};
