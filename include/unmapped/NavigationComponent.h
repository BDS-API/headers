#pragma once

#include <memory>


class NavigationComponent {

public:
    void getAvoidSun()const;
    void getTickTimeout()const;
    void getEndPathRadiusSqr()const;
    void setTerminationThreshold(float);
    void setCanOpenDoors(bool);
    void getCanSink()const;
    void updateLastStuckCheck(Mob const&);
    void moveTo(Mob &, std::unique_ptr<Path>, float);
    void getMaxDistance(Actor const&)const;
    void setPath(std::unique_ptr<Path>);
    void getPath()const;
    void setAvoidSun(bool);
    void setSpeed(float);
    void getCanOpenDoors()const;
    void setCanSink(bool);
    void setTickTimeout(int);
    void update(Mob &);
    void setCanPassDoors(bool);
    void getAvoidDamageBlocks()const;
    void getHasEndPathRadius()const;
    void setEndPathRadius(float);
    void moveTo(Mob &, Vec3 const&, float);
    void getAvoidPortals()const;
    void setInternalType(std::unique_ptr<PathNavigation>);
    void setAvoidDamageBlocks(bool);
    void incrementTick();
    void travel(Mob &, float &, float &, float &);
    bool canUpdatePath(Mob const&)const;
    void getSpeed()const;
    void getAvoidWater()const;
    void setIsAmphibious(bool);
    void setCanJump(bool);
    bool isStuck(int)const;
    void moveTo(Mob &, Actor &, float);
    void setCanBreach(bool);
    void getCanBreach()const;
    void resetPath();
    void getHasDestination()const;
    void getIsAmphibious()const;
    void getCanFloat()const;
    NavigationComponent();
    void getCanPassDoors()const;
    void setAvoidPortals(bool);
    void setCanFloat(bool);
    void initializeFromDefinition(Mob &, NavigationDescription *);
    void setIsFollowingRivers(bool);
    ~NavigationComponent();
    void setAvoidWater(bool);
    void getTerminationThreshold()const;
    void createPath(Mob &, Vec3 const&);
    void getLastStuckCheckPosition()const;
    void moveTo(Mob &, Vec3 const&, float, Vec3 const&);
    void stop(Mob &);
    void setHasEndPathRadius(bool);
    NavigationComponent(NavigationComponent &&);
    void setLastStuckCheckPosition(Vec3 const&);
    void getIsFollowingRivers()const;
    bool isDone()const;
    void getCanJump()const;
    void getTargetOffset()const;
    void setTargetOffset(Vec3 const&);
    void setHasDestination(bool);
    void createPath(Mob &, Actor &);
};
