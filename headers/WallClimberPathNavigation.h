#pragma once

class WallClimberPathNavigation : PathNavigation {

    virtual void WallClimber~WallClimberPathNavigation();
    virtual void WallClimber~WallClimberPathNavigation();
    virtual void initializeInternal(Mob &, NavigationDescription *);
    virtual void WallClimbertick(NavigationComponent &, Mob &);
    virtual void getTempMobPos(Mob const&)const;
    virtual void WallClimbercreatePath(NavigationComponent &, Mob &, Vec3 const&);
    virtual void moveTo(NavigationComponent &, Mob &, Vec3 const&, float);
    virtual void WallClimbercreatePath(NavigationComponent &, Mob &, Actor &);
    virtual void WallClimbermoveTo(NavigationComponent &, Mob &, Actor &, float);
    virtual void moveTo(NavigationComponent &, Mob &, std::unique_ptr<Path, std::default_delete<Path>>, float);
    virtual void stop(NavigationComponent &, Mob &);
    virtual void travel(NavigationComponent &, Mob &, float &, float &, float &);
    virtual void WallClimbercanUpdatePath(Mob const&)const;
    virtual void updatePath(NavigationComponent &, Mob &);
}
