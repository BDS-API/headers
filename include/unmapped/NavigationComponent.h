#pragma once

#include "../bedrock/actor/navigation/PathNavigation.h"
#include "../bedrock/actor/Actor.h"
#include "../bedrock/description/component/NavigationDescription.h"
#include "../bedrock/actor/Mob.h"
#include "../bedrock/util/Vec3.h"
#include "Path.h"
#include <memory>


class NavigationComponent {

public:
    void initializeFromDefinition(Mob &, NavigationDescription *);
    void getIsFollowingRivers()const;
    void getCanFloat()const;
    void moveTo(Mob &, std::unique_ptr<Path>, float);
    void setCanPassDoors(bool);
    void setCanSink(bool);
    void setAvoidWater(bool);
    bool isStuck(int)const;
    void setTargetOffset(Vec3 const&);
    void update(Mob &);
    void getAvoidDamageBlocks()const;
    void getCanJump()const;
    void getSpeed()const;
    void setAvoidPortals(bool);
    void setEndPathRadius(float);
    void travel(Mob &, float &, float &, float &);
    void getAvoidWater()const;
    void setAvoidSun(bool);
    void getLastStuckCheckPosition()const;
    void setInternalType(std::unique_ptr<PathNavigation>);
    NavigationComponent();
    void incrementTick();
    void getAvoidSun()const;
    void getCanBreach()const;
    void getHasEndPathRadius()const;
    void setSpeed(float);
    bool isDone()const;
    void moveTo(Mob &, Actor &, float);
    bool canUpdatePath(Mob const&)const;
    void setHasEndPathRadius(bool);
    void setCanOpenDoors(bool);
    void setTerminationThreshold(float);
    void setHasDestination(bool);
    void moveTo(Mob &, Vec3 const&, float);
    void resetPath();
    void setTickTimeout(int);
    void updateLastStuckCheck(Mob const&);
    void getCanSink()const;
    void getIsAmphibious()const;
    void getMaxDistance(Actor const&)const;
    void getHasDestination()const;
    void getTickTimeout()const;
    NavigationComponent(NavigationComponent &&);
    void setLastStuckCheckPosition(Vec3 const&);
    void getTerminationThreshold()const;
    void getAvoidPortals()const;
    void stop(Mob &);
    void setIsAmphibious(bool);
    void getCanPassDoors()const;
    void moveTo(Mob &, Vec3 const&, float, Vec3 const&);
    void createPath(Mob &, Vec3 const&);
    void setPath(std::unique_ptr<Path>);
    void setAvoidDamageBlocks(bool);
    void setCanJump(bool);
    void setCanBreach(bool);
    void getPath()const;
    void setIsFollowingRivers(bool);
    void getTargetOffset()const;
    void setCanFloat(bool);
    void getCanOpenDoors()const;
    void getEndPathRadiusSqr()const;
    ~NavigationComponent();
    void createPath(Mob &, Actor &);
};
