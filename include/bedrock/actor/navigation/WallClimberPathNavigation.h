#pragma once

#include "../Mob"
#include "../Actor"
#include "../../../unmapped/NavigationComponent"
#include "../../util/Vec3"


class WallClimberPathNavigation : PathNavigation {

public:
    virtual WallClimberPathNavigation::~WallClimberPathNavigation()
    virtual void tick(NavigationComponent &, Mob &);
    virtual void createPath(NavigationComponent &, Mob &, Vec3 const&);
    virtual void createPath(NavigationComponent &, Mob &, Actor &);
    virtual void moveTo(NavigationComponent &, Mob &, Actor &, float);
    virtual bool canUpdatePath(Mob const&)const;

    WallClimberPathNavigation(void);
};
