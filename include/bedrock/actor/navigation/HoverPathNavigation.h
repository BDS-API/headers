#pragma once

#include "../Mob"
#include "../Actor"
#include "../../../unmapped/NavigationComponent"
#include "../../util/Vec3"
#include "../../description/component/NavigationDescription"


class HoverPathNavigation : PathNavigation {

public:
    virtual HoverPathNavigation::~HoverPathNavigation()
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
