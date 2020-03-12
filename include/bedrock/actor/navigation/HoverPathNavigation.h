#pragma once

#include "../Actor.h"
#include "../../util/Vec3.h"
#include "../Mob.h"
#include "../../../unmapped/NavigationComponent.h"
#include "PathNavigation.h"
#include "../../description/component/NavigationDescription.h"


class HoverPathNavigation : PathNavigation {

public:
    virtual void updatePath(NavigationComponent &, Mob &);
    virtual bool canUpdatePath(Mob const&)const;
    ~HoverPathNavigation();
    virtual void createPath(NavigationComponent &, Mob &, Vec3 const&);
    virtual void tick(NavigationComponent &, Mob &);
    virtual void createPath(NavigationComponent &, Mob &, Actor &);
    virtual void getTempMobPos(Mob const&)const;
    virtual void stop(NavigationComponent &, Mob &);
    virtual void initializeInternal(Mob &, NavigationDescription *);
    HoverPathNavigation();
};
