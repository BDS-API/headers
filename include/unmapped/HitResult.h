#pragma once



class HitResult {

public:
    HitResult(HitResult const&); // _ZN9HitResultC2ERKS_
    bool isHit()const; // _ZNK9HitResult5isHitEv
    bool isHitLiquid()const; // _ZNK9HitResult11isHitLiquidEv
    void getPos()const; // _ZNK9HitResult6getPosEv
    bool isEntity()const; // _ZNK9HitResult8isEntityEv
    void getEntity()const; // _ZNK9HitResult9getEntityEv
    HitResult(HitResult &&); // _ZN9HitResultC2EOS_
    bool isTile()const; // _ZNK9HitResult6isTileEv
    void getBlock()const; // _ZNK9HitResult8getBlockEv
    void getLiquid()const; // _ZNK9HitResult9getLiquidEv
    void getLiquidFacing()const; // _ZNK9HitResult15getLiquidFacingEv
    void getLiquidPos()const; // _ZNK9HitResult12getLiquidPosEv
    void setIsHitLiquid(bool, HitResult); // _ZN9HitResult14setIsHitLiquidEbS_
    void resetHitType(); // _ZN9HitResult12resetHitTypeEv
    void resetHitEntity(); // _ZN9HitResult14resetHitEntityEv
    HitResult(Vec3 const&, Vec3 const&, Vec3 const&); // _ZN9HitResultC2ERK4Vec3S2_S2_
    HitResult(); // _ZN9HitResultC2Ev
    HitResult(Vec3 const&, Vec3 const&, BlockPos const&, unsigned char, Vec3 const&); // _ZN9HitResultC2ERK4Vec3S2_RK8BlockPoshS2_
    HitResult(Vec3 const&, Vec3 const&, Actor &); // _ZN9HitResultC2ERK4Vec3S2_R5Actor
    HitResult(Vec3 const&, Vec3 const&, HitResult const&); // _ZN9HitResultC2ERK4Vec3S2_RKS_
    HitResult(Vec3 const&, Vec3 const&, Actor &, Vec3 const&); // _ZN9HitResultC2ERK4Vec3S2_R5ActorS2_
    void distanceTo(Actor const&)const; // _ZNK9HitResult10distanceToERK5Actor
    void setOutOfRange(); // _ZN9HitResult13setOutOfRangeEv
    void getFacing()const; // _ZNK9HitResult9getFacingEv
    void getHitResultType(); // _ZN9HitResult16getHitResultTypeEv
    void setFacing(unsigned char); // _ZN9HitResult9setFacingEh
};
