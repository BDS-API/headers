#pragma once



class HitResult {

public:
    void getLiquidPos()const;
    void setOutOfRange();
    void getFacing()const;
    HitResult(HitResult &&);
    HitResult(Vec3 const&, Vec3 const&, BlockPos const&, unsigned char, Vec3 const&);
    bool isHit()const;
    void resetHitType();
    void getLiquidFacing()const;
    void distanceTo(Actor const&)const;
    HitResult(Vec3 const&, Vec3 const&, HitResult const&);
    HitResult(Vec3 const&, Vec3 const&, Actor &, Vec3 const&);
    void setIsHitLiquid(bool, HitResult);
    bool isEntity()const;
    bool isHitLiquid()const;
    HitResult(Vec3 const&, Vec3 const&, Actor &);
    void getEntity()const;
    bool isTile()const;
    void getBlock()const;
    void resetHitEntity();
    HitResult(Vec3 const&, Vec3 const&, Vec3 const&);
    void setFacing(unsigned char);
    HitResult(HitResult const&);
    void getLiquid()const;
    HitResult();
    void getPos()const;
    void getHitResultType();
};
