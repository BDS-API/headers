#pragma once

#include <memory>


class PathNavigation {

public:
    ~PathNavigation(); // _ZN14PathNavigationD2Ev
    virtual void initializeInternal(Mob &, NavigationDescription *); // _ZN14PathNavigation18initializeInternalER3MobP21NavigationDescription
    virtual void tick(NavigationComponent &, Mob &); // _ZN14PathNavigation4tickER19NavigationComponentR3Mob
    virtual void getTempMobPos(Mob const&)const; // _ZNK14PathNavigation13getTempMobPosERK3Mob
    virtual void createPath(NavigationComponent &, Mob &, Vec3 const&); // _ZN14PathNavigation10createPathER19NavigationComponentR3MobRK4Vec3
    virtual void moveTo(NavigationComponent &, Mob &, Vec3 const&, float); // _ZN14PathNavigation6moveToER19NavigationComponentR3MobRK4Vec3f
    virtual void createPath(NavigationComponent &, Mob &, Actor &); // _ZN14PathNavigation10createPathER19NavigationComponentR3MobR5Actor
    virtual void moveTo(NavigationComponent &, Mob &, Actor &, float); // _ZN14PathNavigation6moveToER19NavigationComponentR3MobR5Actorf
    virtual void moveTo(NavigationComponent &, Mob &, std::unique_ptr<Path>, float); // _ZN14PathNavigation6moveToER19NavigationComponentR3MobSt10unique_ptrI4PathSt14default_deleteIS5_EEf
    virtual void stop(NavigationComponent &, Mob &); // _ZN14PathNavigation4stopER19NavigationComponentR3Mob
    virtual void travel(NavigationComponent &, Mob &, float &, float &, float &); // _ZN14PathNavigation6travelER19NavigationComponentR3MobRfS4_S4_
    virtual bool canUpdatePath(Mob const&)const; // _ZNK14PathNavigation13canUpdatePathERK3Mob
    virtual void updatePath(NavigationComponent &, Mob &); // _ZN14PathNavigation10updatePathER19NavigationComponentR3Mob
    PathNavigation(); // _ZN14PathNavigationC2Ev
    void _isPositionOnlyInAir(BlockSource const&, Vec3 const&, Vec2 const&)const; // _ZNK14PathNavigation20_isPositionOnlyInAirERK11BlockSourceRK4Vec3RK4Vec2
    void _getHighestBlockHeight(BlockSource &, Mob &, Vec3 const&, Vec2 const&)const; // _ZNK14PathNavigation22_getHighestBlockHeightER11BlockSourceR3MobRK4Vec3RK4Vec2
};
