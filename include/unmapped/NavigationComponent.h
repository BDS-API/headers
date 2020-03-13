#pragma once

#include <memory>


class NavigationComponent {

public:
    ~NavigationComponent(); // _ZN19NavigationComponentD2Ev
    NavigationComponent(NavigationComponent &&); // _ZN19NavigationComponentC2EOS_
    NavigationComponent(); // _ZN19NavigationComponentC2Ev
    void initializeFromDefinition(Mob &, NavigationDescription *); // _ZN19NavigationComponent24initializeFromDefinitionER3MobP21NavigationDescription
    void setIsAmphibious(bool); // _ZN19NavigationComponent15setIsAmphibiousEb
    void setAvoidSun(bool); // _ZN19NavigationComponent11setAvoidSunEb
    void setCanPassDoors(bool); // _ZN19NavigationComponent15setCanPassDoorsEb
    void setCanOpenDoors(bool); // _ZN19NavigationComponent15setCanOpenDoorsEb
    void setAvoidWater(bool); // _ZN19NavigationComponent13setAvoidWaterEb
    void setAvoidDamageBlocks(bool); // _ZN19NavigationComponent20setAvoidDamageBlocksEb
    void setCanFloat(bool); // _ZN19NavigationComponent11setCanFloatEb
    void setCanSink(bool); // _ZN19NavigationComponent10setCanSinkEb
    void setAvoidPortals(bool); // _ZN19NavigationComponent15setAvoidPortalsEb
    void setCanBreach(bool); // _ZN19NavigationComponent12setCanBreachEb
    void setCanJump(bool); // _ZN19NavigationComponent10setCanJumpEb
    void getAvoidDamageBlocks()const; // _ZNK19NavigationComponent20getAvoidDamageBlocksEv
    void getAvoidPortals()const; // _ZNK19NavigationComponent15getAvoidPortalsEv
    void getAvoidSun()const; // _ZNK19NavigationComponent11getAvoidSunEv
    void getAvoidWater()const; // _ZNK19NavigationComponent13getAvoidWaterEv
    void getCanBreach()const; // _ZNK19NavigationComponent12getCanBreachEv
    void getCanFloat()const; // _ZNK19NavigationComponent11getCanFloatEv
    void getCanJump()const; // _ZNK19NavigationComponent10getCanJumpEv
    void getCanOpenDoors()const; // _ZNK19NavigationComponent15getCanOpenDoorsEv
    void getCanPassDoors()const; // _ZNK19NavigationComponent15getCanPassDoorsEv
    void getCanSink()const; // _ZNK19NavigationComponent10getCanSinkEv
    void getEndPathRadiusSqr()const; // _ZNK19NavigationComponent19getEndPathRadiusSqrEv
    void setEndPathRadius(float); // _ZN19NavigationComponent16setEndPathRadiusEf
    void getHasDestination()const; // _ZNK19NavigationComponent17getHasDestinationEv
    void setHasDestination(bool); // _ZN19NavigationComponent17setHasDestinationEb
    void getHasEndPathRadius()const; // _ZNK19NavigationComponent19getHasEndPathRadiusEv
    void setHasEndPathRadius(bool); // _ZN19NavigationComponent19setHasEndPathRadiusEb
    void setInternalType(std::unique_ptr<PathNavigation>); // _ZN19NavigationComponent15setInternalTypeESt10unique_ptrI14PathNavigationSt14default_deleteIS1_EE
    void getIsAmphibious()const; // _ZNK19NavigationComponent15getIsAmphibiousEv
    void getIsFollowingRivers()const; // _ZNK19NavigationComponent20getIsFollowingRiversEv
    void setIsFollowingRivers(bool); // _ZN19NavigationComponent20setIsFollowingRiversEb
    void getLastStuckCheckPosition()const; // _ZNK19NavigationComponent25getLastStuckCheckPositionEv
    void setLastStuckCheckPosition(Vec3 const&); // _ZN19NavigationComponent25setLastStuckCheckPositionERK4Vec3
    void getMaxDistance(Actor const&)const; // _ZNK19NavigationComponent14getMaxDistanceERK5Actor
    void getPath()const; // _ZNK19NavigationComponent7getPathEv
    void setPath(std::unique_ptr<Path>); // _ZN19NavigationComponent7setPathESt10unique_ptrI4PathSt14default_deleteIS1_EE
    void resetPath(); // _ZN19NavigationComponent9resetPathEv
    void getSpeed()const; // _ZNK19NavigationComponent8getSpeedEv
    void setSpeed(float); // _ZN19NavigationComponent8setSpeedEf
    void getTerminationThreshold()const; // _ZNK19NavigationComponent23getTerminationThresholdEv
    void setTerminationThreshold(float); // _ZN19NavigationComponent23setTerminationThresholdEf
    void getTickTimeout()const; // _ZNK19NavigationComponent14getTickTimeoutEv
    void setTickTimeout(int); // _ZN19NavigationComponent14setTickTimeoutEi
    bool isDone()const; // _ZNK19NavigationComponent6isDoneEv
    bool isStuck(int)const; // _ZNK19NavigationComponent7isStuckEi
    void incrementTick(); // _ZN19NavigationComponent13incrementTickEv
    void updateLastStuckCheck(Mob const&); // _ZN19NavigationComponent20updateLastStuckCheckERK3Mob
    void getTargetOffset()const; // _ZNK19NavigationComponent15getTargetOffsetEv
    void setTargetOffset(Vec3 const&); // _ZN19NavigationComponent15setTargetOffsetERK4Vec3
    bool canUpdatePath(Mob const&)const; // _ZNK19NavigationComponent13canUpdatePathERK3Mob
    void createPath(Mob &, Vec3 const&); // _ZN19NavigationComponent10createPathER3MobRK4Vec3
    void moveTo(Mob &, Vec3 const&, float); // _ZN19NavigationComponent6moveToER3MobRK4Vec3f
    void moveTo(Mob &, Vec3 const&, float, Vec3 const&); // _ZN19NavigationComponent6moveToER3MobRK4Vec3fS4_
    void createPath(Mob &, Actor &); // _ZN19NavigationComponent10createPathER3MobR5Actor
    void moveTo(Mob &, Actor &, float); // _ZN19NavigationComponent6moveToER3MobR5Actorf
    void moveTo(Mob &, std::unique_ptr<Path>, float); // _ZN19NavigationComponent6moveToER3MobSt10unique_ptrI4PathSt14default_deleteIS3_EEf
    void update(Mob &); // _ZN19NavigationComponent6updateER3Mob
    void stop(Mob &); // _ZN19NavigationComponent4stopER3Mob
    void travel(Mob &, float &, float &, float &); // _ZN19NavigationComponent6travelER3MobRfS2_S2_
};
