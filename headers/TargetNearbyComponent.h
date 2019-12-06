#pragma once

class TargetNearbyComponent {

public:

    void TargetNearbyComponent(TargetNearbyComponent&&);
    void TargetNearbyComponent(void);
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
