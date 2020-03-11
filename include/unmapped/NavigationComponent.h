#pragma once

#include "../bedrock/util/Vec3.h"
#include <memory>
#include "../bedrock/description/component/NavigationDescription.h"
#include "../bedrock/actor/Actor.h"
#include "../bedrock/actor/navigation/PathNavigation.h"
#include "../bedrock/actor/Mob.h"
#include "./NavigationComponent.h"
#include "./Path.h"


class NavigationComponent {

public:

    ~NavigationComponent();
    NavigationComponent(NavigationComponent &&);
    NavigationComponent();
    void initializeFromDefinition(Mob &, NavigationDescription *);
    void setIsAmphibious(bool);
    void setAvoidSun(bool);
    void setCanPassDoors(bool);
    void setCanOpenDoors(bool);
    void setAvoidWater(bool);
    void setAvoidDamageBlocks(bool);
    void setCanFloat(bool);
    void setCanSink(bool);
    void setAvoidPortals(bool);
    void setCanBreach(bool);
    void setCanJump(bool);
    void getAvoidDamageBlocks()const;
    void getAvoidPortals()const;
    void getAvoidSun()const;
    void getAvoidWater()const;
    void getCanBreach()const;
    void getCanFloat()const;
    void getCanJump()const;
    void getCanOpenDoors()const;
    void getCanPassDoors()const;
    void getCanSink()const;
    void getEndPathRadiusSqr()const;
    void setEndPathRadius(float);
    void getHasDestination()const;
    void setHasDestination(bool);
    void getHasEndPathRadius()const;
    void setHasEndPathRadius(bool);
    void setInternalType(std::unique_ptr<PathNavigation, std::default_delete<PathNavigation>>);
    void getIsAmphibious()const;
    void getIsFollowingRivers()const;
    void setIsFollowingRivers(bool);
    void getLastStuckCheckPosition()const;
    void setLastStuckCheckPosition(Vec3 const&);
    void getMaxDistance(Actor const&)const;
    void getPath()const;
    void setPath(std::unique_ptr<Path, std::default_delete<Path>>);
    void resetPath();
    void getSpeed()const;
    void setSpeed(float);
    void getTerminationThreshold()const;
    void setTerminationThreshold(float);
    void getTickTimeout()const;
    void setTickTimeout(int);
    bool isDone()const;
    bool isStuck(int)const;
    void incrementTick();
    void updateLastStuckCheck(Mob const&);
    void getTargetOffset()const;
    void setTargetOffset(Vec3 const&);
    bool canUpdatePath(Mob const&)const;
    void createPath(Mob &, Vec3 const&);
    void moveTo(Mob &, Vec3 const&, float);
    void moveTo(Mob &, Vec3 const&, float, Vec3 const&);
    void createPath(Mob &, Actor &);
    void moveTo(Mob &, Actor &, float);
    void moveTo(Mob &, std::unique_ptr<Path, std::default_delete<Path>>, float);
    void update(Mob &);
    void stop(Mob &);
    void travel(Mob &, float &, float &, float &);
};
