#pragma once

#include "../Actor.h"
#include "../../util/Vec3.h"
#include "../Mob.h"
#include "../../../unmapped/NavigationComponent.h"
#include "PathNavigation.h"


class WallClimberPathNavigation : PathNavigation {

public:
    virtual void createPath(NavigationComponent &, Mob &, Actor &);
    virtual bool canUpdatePath(Mob const&)const;
    virtual void moveTo(NavigationComponent &, Mob &, Actor &, float);
    virtual void tick(NavigationComponent &, Mob &);
    virtual void createPath(NavigationComponent &, Mob &, Vec3 const&);
    ~WallClimberPathNavigation();
    WallClimberPathNavigation();
};
