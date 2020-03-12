#pragma once

#include "../bedrock/actor/Actor.h"
#include "../bedrock/actor/unmapped/ActorUniqueID.h"
#include "../bedrock/actor/Mob.h"
#include "../bedrock/util/Vec3.h"


class FlockingComponent {

public:
    void updateNeighborhoodData(Actor const&);
    void getInFlock()const;
    void setGoalHeading(Vec3 const&);
    void setHasGoalTarget(bool);
    void mergeNeighborhoods(Actor &);
    void getNeighborhood();
    ~FlockingComponent();
    void getCurrentHeading()const;
    void getCohesionWeight()const;
    void setInFlock(bool);
    void getMinHeight()const;
    void addFlockMember(ActorUniqueID);
    void toggleFlock(bool);
    FlockingComponent(FlockingComponent &&);
    void setGroupVelocity(Vec3 const&);
    void getSeparationWeight()const;
    void setIsLeader(bool);
    bool needsDoubleSpeed();
    void validateVariantEntityTypes(Actor const&, Actor const&)const;
    void calculateFlockVector(Actor const&);
    void setCurrentHeading(Vec3 const&);
    FlockingComponent();
    bool containsMember(ActorUniqueID);
    void getFlockLimit()const;
    void setFlockLimit(int);
    void breakFlock(Actor const&);
    void calculateGoalHeading(Mob &);
    void manageNeighborhood(Actor &);
    void joinFlock(Actor &);
    void getMaxHeight()const;
    void setUsingDirection(bool);
    void getIsEnabled()const;
    bool hasGoalTarget()const;
    void clearNeighborhood();
    void getGoalHeading()const;
    void getIsLeader()const;
    void getUsingDirection()const;
    bool canJoinFlock(Actor &)const;
    void getInWater()const;
};
