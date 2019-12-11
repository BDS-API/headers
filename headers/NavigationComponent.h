#pragma once

class NavigationComponent {

public:

    void NavigationComponent(NavigationComponent&&);
    void NavigationComponent(void);
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
    void getAvoidDamageBlocks(void)const;
    void getAvoidPortals(void)const;
    void getAvoidSun(void)const;
    void getAvoidWater(void)const;
    void getCanBreach(void)const;
    void getCanFloat(void)const;
    void getCanJump(void)const;
    void getCanOpenDoors(void)const;
    void getCanPassDoors(void)const;
    void getCanSink(void)const;
    void getEndPathRadiusSqr(void)const;
    void setEndPathRadius(float);
    void getHasDestination(void)const;
    void setHasDestination(bool);
    void getHasEndPathRadius(void)const;
    void setHasEndPathRadius(bool);
    void setInternalType(std::unique_ptr<PathNavigation, std::default_delete<PathNavigation>>);
    void getIsAmphibious(void)const;
    void getIsFollowingRivers(void)const;
    void setIsFollowingRivers(bool);
    void getLastStuckCheckPosition(void)const;
    void setLastStuckCheckPosition(Vec3 const&);
    void getMaxDistance(Actor const&)const;
    void getPath(void)const;
    void setPath(std::unique_ptr<Path, std::default_delete<Path>>);
    void resetPath(void);
    void getSpeed(void)const;
    void setSpeed(float);
    void getTerminationThreshold(void)const;
    void setTerminationThreshold(float);
    void getTickTimeout(void)const;
    void setTickTimeout(int);
    bool isDone(void)const;
    bool isStuck(int)const;
    void incrementTick(void);
    void updateLastStuckCheck(Mob const&);
    void getTargetOffset(void)const;
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
