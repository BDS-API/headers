#pragma once

#include "../Actor"
#include "../Mob"
#include "../../util/Vec3"
#include "../../../unmapped/NavigationComponent"


class WallClimberPathNavigation : PathNavigation {

public:
    WallClimberPathNavigation::~WallClimberPathNavigation()
    virtual void tick(NavigationComponent &, Mob &);
    virtual void createPath(NavigationComponent &, Mob &, Vec3 const&);
    virtual void createPath(NavigationComponent &, Mob &, Actor &);
    virtual void moveTo(NavigationComponent &, Mob &, Actor &, float);
    virtual bool canUpdatePath(Mob const&)const;

    WallClimberPathNavigation(void);
};
