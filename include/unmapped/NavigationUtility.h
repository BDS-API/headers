#pragma once



namespace NavigationUtility {

    bool isInLiquid(Mob const&);
    void invalidPathStartStatus(Mob const&, BlockPos &);
    void moveCondition(Mob const&, Block const&);
    bool canWalkDirectly(Mob &, Vec3 const&, Vec3 const&, int, int, int, bool);
    bool canWalkAbove(Mob &, int, int, int, int, int, int, Vec3 const&, float, float, bool);
    bool isStableDestination(Mob const&, BlockPos &);
    bool canSwimDirectly(Mob &, Vec3 const&, Vec3 const&);
    bool canFlyDirectly(Mob &, Vec3 const&, Vec3 const&);
    void closeToDone(Mob const&, float);
    bool canMoveDirectly(Mob &, Vec3 const&, Vec3 const&, int, int, int, bool);
    void flyCondition(Mob const&, BlockSource &, int, int, int);
    bool isInNode(Mob const&, BlockPos const&);
    bool isLastNode(unsigned long, Path const&);
    void trimPathFromSun(Mob const&);
    bool canMoveDirectlyWaterBound(Mob const&, Vec3 const&, Vec3 const&);
    bool canWalkOn(Mob &, int, int, int, int, int, int, Vec3 const&, float, float, bool);
    bool isDoorBlockingPath(Mob const&, Block const&, Path const&, BlockPos const&, unsigned long);
    bool isNextNodeValid(unsigned long, Path const&);
    void swimCondition(Mob const&, BlockSource &, int, int, int);
    void getMobScale(Mob const&);
    void getSurfaceY(Mob const&);
};
