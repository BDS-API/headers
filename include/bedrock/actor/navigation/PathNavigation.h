#pragma once

#include "../Mob"
#include "../Actor"
#include "../../block/unmapped/BlockSource"
#include "../../../unmapped/NavigationComponent"
#include "../../../unmapped/Path"
#include "../../util/Vec3"
#include "../../util/Vec2"
#include "../../description/component/NavigationDescription"


class PathNavigation {

public:
    virtual PathNavigation::~PathNavigation()
    virtual void initializeInternal(Mob &, NavigationDescription *);
    virtual void tick(NavigationComponent &, Mob &);
    virtual void getTempMobPos(Mob const&)const;
    virtual void createPath(NavigationComponent &, Mob &, Vec3 const&);
    virtual void moveTo(NavigationComponent &, Mob &, Vec3 const&, float);
    virtual void createPath(NavigationComponent &, Mob &, Actor &);
    virtual void moveTo(NavigationComponent &, Mob &, Actor &, float);
    virtual void moveTo(NavigationComponent &, Mob &, std::unique_ptr<Path, std::default_delete<Path>>, float);
    virtual void stop(NavigationComponent &, Mob &);
    virtual void travel(NavigationComponent &, Mob &, float &, float &, float &);
    virtual bool canUpdatePath(Mob const&)const;
    virtual void updatePath(NavigationComponent &, Mob &);

    PathNavigation(void);
    void _isPositionOnlyInAir(BlockSource const&, Vec3 const&, Vec2 const&)const;
    void _getHighestBlockHeight(BlockSource &, Mob &, Vec3 const&, Vec2 const&)const;
};
