#pragma once

#include <memory>


class PathNavigation {

public:
    virtual void stop(NavigationComponent &, Mob &);
    virtual void createPath(NavigationComponent &, Mob &, Vec3 const&);
    ~PathNavigation();
    virtual void moveTo(NavigationComponent &, Mob &, Vec3 const&, float);
    virtual void getTempMobPos(Mob const&)const;
    virtual void createPath(NavigationComponent &, Mob &, Actor &);
    virtual void initializeInternal(Mob &, NavigationDescription *);
    virtual void travel(NavigationComponent &, Mob &, float &, float &, float &);
    virtual void moveTo(NavigationComponent &, Mob &, Actor &, float);
    virtual void moveTo(NavigationComponent &, Mob &, std::unique_ptr<Path>, float);
    virtual void updatePath(NavigationComponent &, Mob &);
    virtual bool canUpdatePath(Mob const&)const;
    virtual void tick(NavigationComponent &, Mob &);
    void _getHighestBlockHeight(BlockSource &, Mob &, Vec3 const&, Vec2 const&)const;
    void _isPositionOnlyInAir(BlockSource const&, Vec3 const&, Vec2 const&)const;
    PathNavigation();
};
