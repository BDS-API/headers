#pragma once

class WaterBoundPathNavigation : PathNavigation {

    virtual void WaterBound~WaterBoundPathNavigation();
    virtual void WaterBound~WaterBoundPathNavigation();
    virtual void WaterBoundinitializeInternal(Mob &, NavigationDescription *);
    virtual void WaterBoundtick(NavigationComponent &, Mob &);
    virtual void WaterBoundgetTempMobPos(Mob const&)const;
    virtual void createPath(NavigationComponent &, Mob &, Vec3 const&);
    virtual void moveTo(NavigationComponent &, Mob &, Vec3 const&, float);
    virtual void createPath(NavigationComponent &, Mob &, Actor &);
    virtual void moveTo(NavigationComponent &, Mob &, Actor &, float);
    virtual void moveTo(NavigationComponent &, Mob &, std::unique_ptr<Path, std::default_delete<Path>>, float);
    virtual void stop(NavigationComponent &, Mob &);
    virtual void WaterBoundtravel(NavigationComponent &, Mob &, float &, float &, float &);
    virtual void WaterBoundcanUpdatePath(Mob const&)const;
    virtual void WaterBoundupdatePath(NavigationComponent &, Mob &);
}
