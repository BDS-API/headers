#pragma once

#include "../bedrock/actor/unmapped/ActorUniqueID.h"


class FlockingComponent {

public:
    void manageNeighborhood(Actor &);
    void getMaxHeight()const;
    void clearNeighborhood();
    void setCurrentHeading(Vec3 const&);
    void getIsEnabled()const;
    void updateNeighborhoodData(Actor const&);
    void addFlockMember(ActorUniqueID);
    FlockingComponent(FlockingComponent &&);
    void mergeNeighborhoods(Actor &);
    void getNeighborhood();
    void getCurrentHeading()const;
    ~FlockingComponent();
    void setGroupVelocity(Vec3 const&);
    bool canJoinFlock(Actor &)const;
    void breakFlock(Actor const&);
    void setUsingDirection(bool);
    void validateVariantEntityTypes(Actor const&, Actor const&)const;
    void getIsLeader()const;
    void getFlockLimit()const;
    void getCohesionWeight()const;
    void setHasGoalTarget(bool);
    bool needsDoubleSpeed();
    void getUsingDirection()const;
    void setInFlock(bool);
    void setGoalHeading(Vec3 const&);
    void getMinHeight()const;
    void calculateFlockVector(Actor const&);
    void getSeparationWeight()const;
    void toggleFlock(bool);
    void joinFlock(Actor &);
    void getInWater()const;
    void setIsLeader(bool);
    void getInFlock()const;
    void setFlockLimit(int);
    bool hasGoalTarget()const;
    void getGoalHeading()const;
    bool containsMember(ActorUniqueID);
    void calculateGoalHeading(Mob &);
    FlockingComponent();
};
