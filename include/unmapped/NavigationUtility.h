#pragma once

#include "../bedrock/actor/Mob.h"
#include "../bedrock/util/BlockPos.h"
#include "../bedrock/util/Vec3.h"
#include "../bedrock/block/unmapped/BlockSource.h"
#include "Path.h"
#include "Block.h"


namespace NavigationUtility {

    void flyCondition(Mob const&, BlockSource &, int, int, int);
    void swimCondition(Mob const&, BlockSource &, int, int, int);
    void getMobScale(Mob const&);
    void getSurfaceY(Mob const&);
    bool canWalkOn(Mob &, int, int, int, int, int, int, Vec3 const&, float, float, bool);
    bool canMoveDirectlyWaterBound(Mob const&, Vec3 const&, Vec3 const&);
    bool canWalkDirectly(Mob &, Vec3 const&, Vec3 const&, int, int, int, bool);
    bool canMoveDirectly(Mob &, Vec3 const&, Vec3 const&, int, int, int, bool);
    bool isInLiquid(Mob const&);
    bool isDoorBlockingPath(Mob const&, Block const&, Path const&, BlockPos const&, unsigned long);
    void closeToDone(Mob const&, float);
    bool isNextNodeValid(unsigned long, Path const&);
    bool canWalkAbove(Mob &, int, int, int, int, int, int, Vec3 const&, float, float, bool);
    void moveCondition(Mob const&, Block const&);
    bool isInNode(Mob const&, BlockPos const&);
    bool isStableDestination(Mob const&, BlockPos &);
    void trimPathFromSun(Mob const&);
    bool canFlyDirectly(Mob &, Vec3 const&, Vec3 const&);
    bool canSwimDirectly(Mob &, Vec3 const&, Vec3 const&);
    bool isLastNode(unsigned long, Path const&);
    void invalidPathStartStatus(Mob const&, BlockPos &);
};
