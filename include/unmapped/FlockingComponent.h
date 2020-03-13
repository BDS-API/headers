#pragma once

#include "../bedrock/actor/unmapped/ActorUniqueID.h"


class FlockingComponent {

public:
    void getIsEnabled()const; // _ZNK17FlockingComponent12getIsEnabledEv
    void getInWater()const; // _ZNK17FlockingComponent10getInWaterEv
    void getIsLeader()const; // _ZNK17FlockingComponent11getIsLeaderEv
    ~FlockingComponent(); // _ZN17FlockingComponentD2Ev
    FlockingComponent(FlockingComponent &&); // _ZN17FlockingComponentC2EOS_
    void setGoalHeading(Vec3 const&); // _ZN17FlockingComponent14setGoalHeadingERK4Vec3
    void setHasGoalTarget(bool); // _ZN17FlockingComponent16setHasGoalTargetEb
    void setUsingDirection(bool); // _ZN17FlockingComponent17setUsingDirectionEb
    void breakFlock(Actor const&); // _ZN17FlockingComponent10breakFlockERK5Actor
    void clearNeighborhood(); // _ZN17FlockingComponent17clearNeighborhoodEv
    void updateNeighborhoodData(Actor const&); // _ZN17FlockingComponent22updateNeighborhoodDataERK5Actor
    void validateVariantEntityTypes(Actor const&, Actor const&)const; // _ZNK17FlockingComponent26validateVariantEntityTypesERK5ActorS2_
    bool containsMember(ActorUniqueID); // _ZN17FlockingComponent14containsMemberE13ActorUniqueID
    void manageNeighborhood(Actor &); // _ZN17FlockingComponent18manageNeighborhoodER5Actor
    void mergeNeighborhoods(Actor &); // _ZN17FlockingComponent18mergeNeighborhoodsER5Actor
    void calculateFlockVector(Actor const&); // _ZN17FlockingComponent20calculateFlockVectorERK5Actor
    void calculateGoalHeading(Mob &); // _ZN17FlockingComponent20calculateGoalHeadingER3Mob
    bool canJoinFlock(Actor &)const; // _ZNK17FlockingComponent12canJoinFlockER5Actor
    void joinFlock(Actor &); // _ZN17FlockingComponent9joinFlockER5Actor
    void addFlockMember(ActorUniqueID); // _ZN17FlockingComponent14addFlockMemberE13ActorUniqueID
    void getNeighborhood(); // _ZN17FlockingComponent15getNeighborhoodEv
    void setFlockLimit(int); // _ZN17FlockingComponent13setFlockLimitEi
    void setIsLeader(bool); // _ZN17FlockingComponent11setIsLeaderEb
    void getSeparationWeight()const; // _ZNK17FlockingComponent19getSeparationWeightEv
    void getCohesionWeight()const; // _ZNK17FlockingComponent17getCohesionWeightEv
    void setCurrentHeading(Vec3 const&); // _ZN17FlockingComponent17setCurrentHeadingERK4Vec3
    void setInFlock(bool); // _ZN17FlockingComponent10setInFlockEb
    void toggleFlock(bool); // _ZN17FlockingComponent11toggleFlockEb
    void setGroupVelocity(Vec3 const&); // _ZN17FlockingComponent16setGroupVelocityERK4Vec3
    void getInFlock()const; // _ZNK17FlockingComponent10getInFlockEv
    void getFlockLimit()const; // _ZNK17FlockingComponent13getFlockLimitEv
    void getMinHeight()const; // _ZNK17FlockingComponent12getMinHeightEv
    void getMaxHeight()const; // _ZNK17FlockingComponent12getMaxHeightEv
    FlockingComponent(); // _ZN17FlockingComponentC2Ev
    void getGoalHeading()const; // _ZNK17FlockingComponent14getGoalHeadingEv
    bool hasGoalTarget()const; // _ZNK17FlockingComponent13hasGoalTargetEv
    void getUsingDirection()const; // _ZNK17FlockingComponent17getUsingDirectionEv
    bool needsDoubleSpeed(); // _ZN17FlockingComponent16needsDoubleSpeedEv
    void getCurrentHeading()const; // _ZNK17FlockingComponent17getCurrentHeadingEv
};
