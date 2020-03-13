#pragma once



class TargetNearbyComponent {

public:
    TargetNearbyComponent(TargetNearbyComponent &&); // _ZN21TargetNearbyComponentC2EOS_
    TargetNearbyComponent(); // _ZN21TargetNearbyComponentC2Ev
    void initFromDefinition(Actor &); // _ZN21TargetNearbyComponent18initFromDefinitionER5Actor
    void getWasSeenLastTick()const; // _ZNK21TargetNearbyComponent18getWasSeenLastTickEv
    void getWasInsideRange()const; // _ZNK21TargetNearbyComponent17getWasInsideRangeEv
    void getWasOutsideRange()const; // _ZNK21TargetNearbyComponent18getWasOutsideRangeEv
    void getPreviousDistance()const; // _ZNK21TargetNearbyComponent19getPreviousDistanceEv
    void setWasSeenLastTick(bool); // _ZN21TargetNearbyComponent18setWasSeenLastTickEb
    void setWasInsideRange(bool); // _ZN21TargetNearbyComponent17setWasInsideRangeEb
    void setWasOutsideRange(bool); // _ZN21TargetNearbyComponent18setWasOutsideRangeEb
    void setPreviousDistance(float); // _ZN21TargetNearbyComponent19setPreviousDistanceEf
};
