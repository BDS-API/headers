#pragma once

#include <string>
#include "ActorBlock.h"


class CampfireBlock : ActorBlock {

public:
    virtual void onPlace(BlockSource &, BlockPos const&)const;
    virtual bool asItemInstance(BlockSource &, BlockPos const&, Block const&)const;
    virtual void waterSpreadCausesSpawn()const;
    virtual void entityInside(BlockSource &, BlockPos const&, Actor &)const;
    virtual void getResourceItem(Random &, Block const&, int)const;
    virtual void getSilkTouchItemInstance(Block const&)const;
    virtual void getAABB(BlockSource &, BlockPos const&, Block const&, AABB &, bool)const;
    virtual bool isWaterBlocking()const;
    virtual void animateTick(BlockSource &, BlockPos const&, Random &)const;
    ~CampfireBlock();
    virtual void getLightEmission(Block const&)const;
    virtual void use(Player &, BlockPos const&)const;
    virtual bool hasVariableLighting()const;
    virtual void tick(BlockSource &, BlockPos const&, Random &)const;
    virtual bool canBeSilkTouched()const;
    virtual bool canSurvive(BlockSource &, BlockPos const&)const;
    virtual bool canContainLiquid()const;
    virtual void getVisualShape(Block const&, AABB &, bool)const;
    virtual void checkIsPathable(Actor &, BlockPos const&, BlockPos const&)const;
    virtual void neighborChanged(BlockSource &, BlockPos const&, BlockPos const&)const;
    virtual void mayPlace(BlockSource &, BlockPos const&)const;
    virtual void onRemove(BlockSource &, BlockPos const&)const;
    virtual void getPlacementBlock(Actor &, BlockPos const&, unsigned char, Vec3 const&, int)const;
    CampfireBlock(std::string const&, int);
    void _checkAlive(BlockSource &, BlockPos const&)const;
    void tryDouseFire(BlockSource &, BlockPos const&, bool);
    void tryLightFire(BlockSource &, BlockPos const&);
    bool isLit(Block const&);
    void _getShape(Block const&, AABB &)const;
    void _dropCookingFood(BlockSource &, BlockPos const&)const;
    void _canBeLit(BlockSource &, BlockPos const&);
    void _getBlockActor(BlockSource &, BlockPos const&)const;
};
