#pragma once

#include "../bedrock/actor/Actor"


class TargetNearbyComponent {

public:

    TargetNearbyComponent(TargetNearbyComponent&&);
    TargetNearbyComponent(void);
    void initFromDefinition(Actor &);
    void getWasSeenLastTick(void)const;
    void getWasInsideRange(void)const;
    void getWasOutsideRange(void)const;
    void getPreviousDistance(void)const;
    void setWasSeenLastTick(bool);
    void setWasInsideRange(bool);
    void setWasOutsideRange(bool);
    void setPreviousDistance(float);
};
