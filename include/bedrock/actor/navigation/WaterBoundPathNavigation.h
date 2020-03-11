#pragma once

#include "./PathNavigation.h"
#include "../Mob.h"
#include "../../../unmapped/NavigationComponent.h"
#include "../../description/component/NavigationDescription.h"


class WaterBoundPathNavigation : PathNavigation {

public:
    virtual ~WaterBoundPathNavigation();
    virtual void initializeInternal(Mob &, NavigationDescription *);
    virtual void tick(NavigationComponent &, Mob &);
    virtual void getTempMobPos(Mob const&)const;
    virtual void travel(NavigationComponent &, Mob &, float &, float &, float &);
    virtual bool canUpdatePath(Mob const&)const;
    virtual void updatePath(NavigationComponent &, Mob &);

    WaterBoundPathNavigation();
    void setSteerDampening(float);
    void setMinDepth(float);
    void setMaxDepth(float);
    void setTerrainAvoidDistance(float);
    void setLookAheadDist(float);
    void setRiverFollow(bool);
    void getMinDepth()const;
    void getMaxDepth()const;
    void getSteerDampening()const;
    void getTerrainAvoidDistance()const;
};
