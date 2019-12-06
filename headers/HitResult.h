#pragma once

class HitResult {

public:

    void HitResult(HitResult const&);
    bool isHit(void)const;
    bool isHitLiquid(void)const;
    void getPos(void)const;
    bool isEntity(void)const;
    void getEntity(void)const;
    void HitResult(HitResult&&);
    bool isTile(void)const;
    void getBlock(void)const;
    void getLiquid(void)const;
    void getLiquidFacing(void)const;
    void getLiquidPos(void)const;
    void setIsHitLiquid(bool, HitResult);
    void resetHitType(void);
    void resetHitEntity(void);
    void HitResult(Vec3 const&, Vec3 const&, Vec3 const&);
    void HitResult(void);
    void HitResult(Vec3 const&, Vec3 const&, BlockPos const&, unsigned char, Vec3 const&);
    void HitResult(Vec3 const&, Vec3 const&, Actor &);
    void HitResult(Vec3 const&, Vec3 const&, HitResult const&);
    void HitResult(Vec3 const&, Vec3 const&, Actor &, Vec3 const&);
    void distanceTo(Actor const&)const;
    void setOutOfRange(void);
    void getFacing(void)const;
    void getHitResultType(void);
    void setFacing(unsigned char);
};
