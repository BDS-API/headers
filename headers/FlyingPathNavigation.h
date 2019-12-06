#pragma once

class FlyingPathNavigation : PathNavigation {

public:
    virtual ~FlyingPathNavigation();
    virtual void initializeInternal(Mob &, NavigationDescription *);
    virtual void tick(NavigationComponent &, Mob &);
    virtual void getTempMobPos(Mob const&)const;
    virtual void createPath(NavigationComponent &, Mob &, Vec3 const&);
    virtual void createPath(NavigationComponent &, Mob &, Actor &);
    virtual void stop(NavigationComponent &, Mob &);
    virtual void updatePath(NavigationComponent &, Mob &);

    void FlyingPathNavigation(void);
    bool canUpdatePathNonPolymorphic(Mob const&)const;
};
