#pragma once

#include "../Actor"
#include "../Mob"
#include "../../description/component/NavigationDescription"
#include "../../util/Vec3"
#include "../../../unmapped/NavigationComponent"


class HoverPathNavigation : PathNavigation {

public:
    HoverPathNavigation::~HoverPathNavigation()
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
