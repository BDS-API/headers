#pragma once

#include "../bedrock/actor/Actor.h"
#include "../bedrock/util/BlockPos.h"
#include "../bedrock/util/Vec3.h"


class HitResult {

public:
    HitResult(Vec3 const&, Vec3 const&, Vec3 const&);
    HitResult(HitResult &&);
    void setFacing(unsigned char);
    void getEntity()const;
    bool isHit()const;
    void resetHitType();
    void getLiquidPos()const;
    void getPos()const;
    HitResult(HitResult const&);
    HitResult(Vec3 const&, Vec3 const&, Actor &, Vec3 const&);
    HitResult();
    void getLiquidFacing()const;
    void setIsHitLiquid(bool, HitResult);
    HitResult(Vec3 const&, Vec3 const&, HitResult const&);
    HitResult(Vec3 const&, Vec3 const&, Actor &);
    void getHitResultType();
    void getLiquid()const;
    bool isTile()const;
    bool isEntity()const;
    bool isHitLiquid()const;
    void setOutOfRange();
    void distanceTo(Actor const&)const;
    HitResult(Vec3 const&, Vec3 const&, BlockPos const&, unsigned char, Vec3 const&);
    void resetHitEntity();
    void getBlock()const;
    void getFacing()const;
};
