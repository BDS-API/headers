#pragma once



namespace NavigationUtility {

    bool isInLiquid(Mob const&); // _ZN17NavigationUtility10isInLiquidERK3Mob
    bool isStableDestination(Mob const&, BlockPos &); // _ZN17NavigationUtility19isStableDestinationERK3MobR8BlockPos
    void getSurfaceY(Mob const&); // _ZN17NavigationUtility11getSurfaceYERK3Mob
    void getMobScale(Mob const&); // _ZN17NavigationUtility11getMobScaleERK3Mob
    void closeToDone(Mob const&, float); // _ZN17NavigationUtility11closeToDoneERK3Mobf
    void invalidPathStartStatus(Mob const&, BlockPos &); // _ZN17NavigationUtility22invalidPathStartStatusERK3MobR8BlockPos
    void trimPathFromSun(Mob const&); // _ZN17NavigationUtility15trimPathFromSunERK3Mob
    bool canMoveDirectly(Mob &, Vec3 const&, Vec3 const&, int, int, int, bool); // _ZN17NavigationUtility15canMoveDirectlyER3MobRK4Vec3S4_iiib
    bool canSwimDirectly(Mob &, Vec3 const&, Vec3 const&); // _ZN17NavigationUtility15canSwimDirectlyER3MobRK4Vec3S4_
    bool canFlyDirectly(Mob &, Vec3 const&, Vec3 const&); // _ZN17NavigationUtility14canFlyDirectlyER3MobRK4Vec3S4_
    bool canWalkDirectly(Mob &, Vec3 const&, Vec3 const&, int, int, int, bool); // _ZN17NavigationUtility15canWalkDirectlyER3MobRK4Vec3S4_iiib
    bool canMoveDirectlyWaterBound(Mob const&, Vec3 const&, Vec3 const&); // _ZN17NavigationUtility25canMoveDirectlyWaterBoundERK3MobRK4Vec3S5_
    bool canWalkOn(Mob &, int, int, int, int, int, int, Vec3 const&, float, float, bool); // _ZN17NavigationUtility9canWalkOnER3MobiiiiiiRK4Vec3ffb
    bool canWalkAbove(Mob &, int, int, int, int, int, int, Vec3 const&, float, float, bool); // _ZN17NavigationUtility12canWalkAboveER3MobiiiiiiRK4Vec3ffb
    void moveCondition(Mob const&, Block const&); // _ZN17NavigationUtility13moveConditionERK3MobRK5Block
    void flyCondition(Mob const&, BlockSource &, int, int, int); // _ZN17NavigationUtility12flyConditionERK3MobR11BlockSourceiii
    void swimCondition(Mob const&, BlockSource &, int, int, int); // _ZN17NavigationUtility13swimConditionERK3MobR11BlockSourceiii
    bool isNextNodeValid(unsigned long, Path const&); // _ZN17NavigationUtility15isNextNodeValidEmRK4Path
    bool isLastNode(unsigned long, Path const&); // _ZN17NavigationUtility10isLastNodeEmRK4Path
    bool isInNode(Mob const&, BlockPos const&); // _ZN17NavigationUtility8isInNodeERK3MobRK8BlockPos
    bool isDoorBlockingPath(Mob const&, Block const&, Path const&, BlockPos const&, unsigned long); // _ZN17NavigationUtility18isDoorBlockingPathERK3MobRK5BlockRK4PathRK8BlockPosm
};
