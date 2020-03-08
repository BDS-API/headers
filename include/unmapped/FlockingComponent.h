#pragma once

#include "../bedrock/actor/Mob"
#include "../bedrock/actor/Actor"


class FlockingComponent {

public:

    void getIsEnabled(void)const;
    void getInWater(void)const;
    void getIsLeader(void)const;
    FlockingComponent(FlockingComponent&&);
    void setGoalHeading(Vec3 const&);
    void setHasGoalTarget(bool);
    void setUsingDirection(bool);
    void breakFlock(Actor const&);
    void clearNeighborhood(void);
    void updateNeighborhoodData(Actor const&);
    void validateVariantEntityTypes(Actor const&, Actor const&)const;
    bool containsMember(ActorUniqueID);
    void manageNeighborhood(Actor &);
    void mergeNeighborhoods(Actor &);
    void calculateFlockVector(Actor const&);
    void calculateGoalHeading(Mob &);
    bool canJoinFlock(Actor &)const;
    void joinFlock(Actor &);
    void addFlockMember(ActorUniqueID);
    void getNeighborhood(void);
    void setFlockLimit(int);
    void setIsLeader(bool);
    void getSeparationWeight(void)const;
    void getCohesionWeight(void)const;
    void setCurrentHeading(Vec3 const&);
    void setInFlock(bool);
    void toggleFlock(bool);
    void setGroupVelocity(Vec3 const&);
    void getInFlock(void)const;
    void getFlockLimit(void)const;
    void getMinHeight(void)const;
    void getMaxHeight(void)const;
    FlockingComponent(void);
    void getGoalHeading(void)const;
    bool hasGoalTarget(void)const;
    void getUsingDirection(void)const;
    bool needsDoubleSpeed(void);
    void getCurrentHeading(void)const;
};
