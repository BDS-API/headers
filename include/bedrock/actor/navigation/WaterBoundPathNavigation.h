#pragma once

#include "PathNavigation.h"


class WaterBoundPathNavigation : PathNavigation {

public:
    virtual void tick(NavigationComponent &, Mob &);
    virtual bool canUpdatePath(Mob const&)const;
    virtual void initializeInternal(Mob &, NavigationDescription *);
    virtual void getTempMobPos(Mob const&)const;
    ~WaterBoundPathNavigation();
    virtual void travel(NavigationComponent &, Mob &, float &, float &, float &);
    virtual void updatePath(NavigationComponent &, Mob &);
    void getTerrainAvoidDistance()const;
    void getMaxDepth()const;
    void setSteerDampening(float);
    void getMinDepth()const;
    void setLookAheadDist(float);
    void getSteerDampening()const;
    void setMinDepth(float);
    void setTerrainAvoidDistance(float);
    void setMaxDepth(float);
    void setRiverFollow(bool);
    WaterBoundPathNavigation();
};
