#pragma once

#include "../Mob"
#include "../../../unmapped/NavigationComponent"


class WaterBoundPathNavigation : PathNavigation {

public:
    virtual WaterBoundPathNavigation::~WaterBoundPathNavigation();
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
    void getMinDepth(void)const;
    void getMaxDepth(void)const;
    void getSteerDampening(void)const;
    void getTerrainAvoidDistance(void)const;
};
