#pragma once

class GenericPathNavigation : PathNavigation {

    virtual void Generic~GenericPathNavigation();
    virtual void Generic~GenericPathNavigation();
    virtual void GenericinitializeInternal(Mob &, NavigationDescription *);
    virtual void Generictick(NavigationComponent &, Mob &);
    virtual void GenericgetTempMobPos(Mob const&)const;
    virtual void createPath(NavigationComponent &, Mob &, Vec3 const&);
    virtual void moveTo(NavigationComponent &, Mob &, Vec3 const&, float);
    virtual void createPath(NavigationComponent &, Mob &, Actor &);
    virtual void moveTo(NavigationComponent &, Mob &, Actor &, float);
    virtual void moveTo(NavigationComponent &, Mob &, std::unique_ptr<Path, std::default_delete<Path>>, float);
    virtual void Genericstop(NavigationComponent &, Mob &);
    virtual void travel(NavigationComponent &, Mob &, float &, float &, float &);
    virtual void canUpdatePath(Mob const&)const;
    virtual void GenericupdatePath(NavigationComponent &, Mob &);
}
