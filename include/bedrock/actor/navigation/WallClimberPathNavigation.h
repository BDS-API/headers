#pragma once

#include "../Actor.h"
#include "./PathNavigation.h"
#include "../../util/Vec3.h"
#include "../../../unmapped/NavigationComponent.h"
#include "../Mob.h"


class WallClimberPathNavigation : PathNavigation {

public:
    virtual ~WallClimberPathNavigation();
    virtual void tick(NavigationComponent &, Mob &);
    virtual void createPath(NavigationComponent &, Mob &, Vec3 const&);
    virtual void createPath(NavigationComponent &, Mob &, Actor &);
    virtual void moveTo(NavigationComponent &, Mob &, Actor &, float);
    virtual bool canUpdatePath(Mob const&)const;

    WallClimberPathNavigation();
};
