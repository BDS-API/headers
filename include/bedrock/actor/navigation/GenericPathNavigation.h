#pragma once

#include "../Mob"
#include "../../../unmapped/NavigationComponent"
#include "../../description/component/NavigationDescription"


class GenericPathNavigation : PathNavigation {

public:
    virtual GenericPathNavigation::~GenericPathNavigation()
    virtual void initializeInternal(Mob &, NavigationDescription *);
    virtual void tick(NavigationComponent &, Mob &);
    virtual void getTempMobPos(Mob const&)const;
    virtual void stop(NavigationComponent &, Mob &);
    virtual void updatePath(NavigationComponent &, Mob &);

    GenericPathNavigation(void);
};
