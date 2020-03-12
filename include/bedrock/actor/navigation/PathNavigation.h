#pragma once

#include "../Actor.h"
#include "../../block/unmapped/BlockSource.h"
#include "../../util/Vec3.h"
#include "../Mob.h"
#include "../../../unmapped/NavigationComponent.h"
#include "../../util/Vec2.h"
#include "../../../unmapped/Path.h"
#include <memory>
#include "../../description/component/NavigationDescription.h"


class PathNavigation {

public:
    virtual void stop(NavigationComponent &, Mob &);
    virtual void initializeInternal(Mob &, NavigationDescription *);
    virtual void createPath(NavigationComponent &, Mob &, Actor &);
    virtual void travel(NavigationComponent &, Mob &, float &, float &, float &);
    virtual bool canUpdatePath(Mob const&)const;
    virtual void createPath(NavigationComponent &, Mob &, Vec3 const&);
    virtual void tick(NavigationComponent &, Mob &);
    virtual void updatePath(NavigationComponent &, Mob &);
    ~PathNavigation();
    virtual void moveTo(NavigationComponent &, Mob &, std::unique_ptr<Path>, float);
    virtual void getTempMobPos(Mob const&)const;
    virtual void moveTo(NavigationComponent &, Mob &, Vec3 const&, float);
    virtual void moveTo(NavigationComponent &, Mob &, Actor &, float);
    void _getHighestBlockHeight(BlockSource &, Mob &, Vec3 const&, Vec2 const&)const;
    void _isPositionOnlyInAir(BlockSource const&, Vec3 const&, Vec2 const&)const;
    PathNavigation();
};
