#pragma once



class TargetNearbyComponent {

public:
    void setWasInsideRange(bool);
    TargetNearbyComponent(TargetNearbyComponent &&);
    void setPreviousDistance(float);
    void getWasSeenLastTick()const;
    TargetNearbyComponent();
    void getPreviousDistance()const;
    void setWasSeenLastTick(bool);
    void initFromDefinition(Actor &);
    void getWasInsideRange()const;
    void setWasOutsideRange(bool);
    void getWasOutsideRange()const;
};
