#pragma once

class HoverPathNavigation : PathNavigation {

public:
    virtual HoverPathNavigation::~HoverPathNavigation();
    virtual void initializeInternal(Mob &, NavigationDescription *);
    virtual void tick(NavigationComponent &, Mob &);
    virtual void getTempMobPos(Mob const&)const;
    virtual void createPath(NavigationComponent &, Mob &, Vec3 const&);
    virtual void createPath(NavigationComponent &, Mob &, Actor &);
    virtual void stop(NavigationComponent &, Mob &);
    virtual bool canUpdatePath(Mob const&)const;
    virtual void updatePath(NavigationComponent &, Mob &);

    HoverPathNavigation(void);
};
