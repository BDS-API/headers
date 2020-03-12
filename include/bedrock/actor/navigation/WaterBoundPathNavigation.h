#pragma once

#include "../../../unmapped/NavigationComponent.h"
#include "PathNavigation.h"
#include "../Mob.h"
#include "../../description/component/NavigationDescription.h"


class WaterBoundPathNavigation : PathNavigation {

public:
    virtual void initializeInternal(Mob &, NavigationDescription *);
    virtual bool canUpdatePath(Mob const&)const;
    virtual void getTempMobPos(Mob const&)const;
    virtual void travel(NavigationComponent &, Mob &, float &, float &, float &);
    ~WaterBoundPathNavigation();
    virtual void updatePath(NavigationComponent &, Mob &);
    virtual void tick(NavigationComponent &, Mob &);
    void getSteerDampening()const;
    void getMaxDepth()const;
    void setSteerDampening(float);
    void setMaxDepth(float);
    void setRiverFollow(bool);
    void getMinDepth()const;
    void setLookAheadDist(float);
    void setMinDepth(float);
    void getTerrainAvoidDistance()const;
    WaterBoundPathNavigation();
    void setTerrainAvoidDistance(float);
};
