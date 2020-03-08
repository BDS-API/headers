#pragma once

#include "../bedrock/actor/Mob"
#include "../bedrock/block/unmapped/BlockSource"
#include "../bedrock/util/BlockPos"
#include "../bedrock/util/Vec3"


class NavigationUtility {

public:

    bool isInLiquid(Mob const&);
    bool isStableDestination(Mob const&, BlockPos &);
    void getSurfaceY(Mob const&);
    void getMobScale(Mob const&);
    void closeToDone(Mob const&, float);
    void invalidPathStartStatus(Mob const&, BlockPos &);
    void trimPathFromSun(Mob const&);
    bool canMoveDirectly(Mob &, Vec3 const&, Vec3 const&, int, int, int, bool);
    bool canSwimDirectly(Mob &, Vec3 const&, Vec3 const&);
    bool canFlyDirectly(Mob &, Vec3 const&, Vec3 const&);
    bool canWalkDirectly(Mob &, Vec3 const&, Vec3 const&, int, int, int, bool);
    bool canMoveDirectlyWaterBound(Mob const&, Vec3 const&, Vec3 const&);
    bool canWalkOn(Mob &, int, int, int, int, int, int, Vec3 const&, float, float, bool);
    bool canWalkAbove(Mob &, int, int, int, int, int, int, Vec3 const&, float, float, bool);
    void moveCondition(Mob const&, Block const&);
    void flyCondition(Mob const&, BlockSource &, int, int, int);
    void swimCondition(Mob const&, BlockSource &, int, int, int);
    bool isNextNodeValid(unsigned long, Path const&);
    bool isLastNode(unsigned long, Path const&);
    bool isInNode(Mob const&, BlockPos const&);
    bool isDoorBlockingPath(Mob const&, Block const&, Path const&, BlockPos const&, unsigned long);
};
