#pragma once

class FlyingPathNavigation : PathNavigation {

    virtual void Flying~FlyingPathNavigation();
    virtual void Flying~FlyingPathNavigation();
    virtual void FlyinginitializeInternal(Mob &, NavigationDescription *);
    virtual void Flyingtick(NavigationComponent &, Mob &);
    virtual void FlyinggetTempMobPos(Mob const&)const;
    virtual void FlyingcreatePath(NavigationComponent &, Mob &, Vec3 const&);
    virtual void moveTo(NavigationComponent &, Mob &, Vec3 const&, float);
    virtual void FlyingcreatePath(NavigationComponent &, Mob &, Actor &);
    virtual void moveTo(NavigationComponent &, Mob &, Actor &, float);
    virtual void moveTo(NavigationComponent &, Mob &, std::unique_ptr<Path, std::default_delete<Path>>, float);
    virtual void Flyingstop(NavigationComponent &, Mob &);
    virtual void travel(NavigationComponent &, Mob &, float &, float &, float &);
    virtual void canUpdatePath(Mob const&)const;
    virtual void FlyingupdatePath(NavigationComponent &, Mob &);
}
