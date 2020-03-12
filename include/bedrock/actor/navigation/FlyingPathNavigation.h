#pragma once

#include "../Actor.h"
#include "../../util/Vec3.h"
#include "../Mob.h"
#include "../../../unmapped/NavigationComponent.h"
#include "PathNavigation.h"
#include "../../description/component/NavigationDescription.h"


class FlyingPathNavigation : PathNavigation {

public:
    virtual void tick(NavigationComponent &, Mob &);
    virtual void getTempMobPos(Mob const&)const;
    virtual void createPath(NavigationComponent &, Mob &, Vec3 const&);
    virtual bool canUpdatePath(Mob const&)const;
    ~FlyingPathNavigation();
    virtual void updatePath(NavigationComponent &, Mob &);
    virtual void createPath(NavigationComponent &, Mob &, Actor &);
    virtual void stop(NavigationComponent &, Mob &);
    virtual void initializeInternal(Mob &, NavigationDescription *);
    FlyingPathNavigation();
};
