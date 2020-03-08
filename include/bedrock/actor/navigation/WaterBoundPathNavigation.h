#pragma once

#include "../Mob"
#include "../../description/component/NavigationDescription"
#include "../../../unmapped/NavigationComponent"


class WaterBoundPathNavigation : PathNavigation {

public:
    WaterBoundPathNavigation::~WaterBoundPathNavigation()
    virtual void initializeInternal(Mob &, NavigationDescription *);
    virtual void tick(NavigationComponent &, Mob &);
    virtual void getTempMobPos(Mob const&)const;
    virtual void travel(NavigationComponent &, Mob &, float &, float &, float &);
    virtual bool canUpdatePath(Mob const&)const;
    virtual void updatePath(NavigationComponent &, Mob &);

    WaterBoundPathNavigation(void);
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
