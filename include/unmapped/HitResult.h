#pragma once

#include "../bedrock/actor/Actor"


class HitResult {

public:

    HitResult(HitResult const&);
    bool isHit(void)const;
    bool isHitLiquid(void)const;
    void getPos(void)const;
    bool isEntity(void)const;
    void getEntity(void)const;
    HitResult(HitResult&&);
    bool isTile(void)const;
    void getBlock(void)const;
    void getLiquid(void)const;
    void getLiquidFacing(void)const;
    void getLiquidPos(void)const;
    void setIsHitLiquid(bool, HitResult);
    void resetHitType(void);
    void resetHitEntity(void);
    HitResult(Vec3 const&, Vec3 const&, Vec3 const&);
    HitResult(void);
    HitResult(Vec3 const&, Vec3 const&, BlockPos const&, unsigned char, Vec3 const&);
    HitResult(Vec3 const&, Vec3 const&, Actor &);
    HitResult(Vec3 const&, Vec3 const&, HitResult const&);
    HitResult(Vec3 const&, Vec3 const&, Actor &, Vec3 const&);
    void distanceTo(Actor const&)const;
    void setOutOfRange(void);
    void getFacing(void)const;
    void getHitResultType(void);
    void setFacing(unsigned char);
};
