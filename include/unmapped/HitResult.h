#pragma once

#include "./HitResult.h"
#include "../bedrock/util/Vec3.h"
#include "../bedrock/actor/Actor.h"
#include "../bedrock/util/BlockPos.h"


class HitResult {

public:

    HitResult(HitResult const&);
    bool isHit()const;
    bool isHitLiquid()const;
    void getPos()const;
    bool isEntity()const;
    void getEntity()const;
    HitResult(HitResult &&);
    bool isTile()const;
    void getBlock()const;
    void getLiquid()const;
    void getLiquidFacing()const;
    void getLiquidPos()const;
    void setIsHitLiquid(bool, HitResult);
    void resetHitType();
    void resetHitEntity();
    HitResult(Vec3 const&, Vec3 const&, Vec3 const&);
    HitResult();
    HitResult(Vec3 const&, Vec3 const&, BlockPos const&, unsigned char, Vec3 const&);
    HitResult(Vec3 const&, Vec3 const&, Actor &);
    HitResult(Vec3 const&, Vec3 const&, HitResult const&);
    HitResult(Vec3 const&, Vec3 const&, Actor &, Vec3 const&);
    void distanceTo(Actor const&)const;
    void setOutOfRange();
    void getFacing()const;
    void getHitResultType();
    void setFacing(unsigned char);
};
