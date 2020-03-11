#pragma once

#include "../Actor.h"
#include "./PathNavigation.h"
#include "../../util/Vec3.h"
#include "../../description/component/NavigationDescription.h"
#include "../../../unmapped/NavigationComponent.h"
#include "../Mob.h"


class FlyingPathNavigation : PathNavigation {

public:
    virtual ~FlyingPathNavigation();
    virtual void initializeInternal(Mob &, NavigationDescription *);
    virtual void tick(NavigationComponent &, Mob &);
    virtual void getTempMobPos(Mob const&)const;
    virtual void createPath(NavigationComponent &, Mob &, Vec3 const&);
    virtual void createPath(NavigationComponent &, Mob &, Actor &);
    virtual void stop(NavigationComponent &, Mob &);
    virtual bool canUpdatePath(Mob const&)const;
    virtual void updatePath(NavigationComponent &, Mob &);

    FlyingPathNavigation();
};
