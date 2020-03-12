#pragma once

#include "../util/AABB.h"
#include "../util/BlockPos.h"
#include "unmapped/BlockSource.h"
#include <string>
#include "../actor/Actor.h"
#include "ActorBlock.h"
#include "../util/Vec3.h"
#include "../../unmapped/Block.h"
#include "../actor/Player.h"
#include "../util/Random.h"


class CampfireBlock : ActorBlock {

public:
    virtual bool canBeSilkTouched()const;
    virtual void tick(BlockSource &, BlockPos const&, Random &)const;
    virtual bool hasVariableLighting()const;
    virtual void getAABB(BlockSource &, BlockPos const&, Block const&, AABB &, bool)const;
    virtual bool canSurvive(BlockSource &, BlockPos const&)const;
    virtual void getPlacementBlock(Actor &, BlockPos const&, unsigned char, Vec3 const&, int)const;
    virtual void onPlace(BlockSource &, BlockPos const&)const;
    ~CampfireBlock();
    virtual void use(Player &, BlockPos const&)const;
    virtual void getLightEmission(Block const&)const;
    virtual bool isWaterBlocking()const;
    virtual void animateTick(BlockSource &, BlockPos const&, Random &)const;
    virtual void getVisualShape(Block const&, AABB &, bool)const;
    virtual bool canContainLiquid()const;
    virtual void getResourceItem(Random &, Block const&, int)const;
    virtual void mayPlace(BlockSource &, BlockPos const&)const;
    virtual void checkIsPathable(Actor &, BlockPos const&, BlockPos const&)const;
    virtual void neighborChanged(BlockSource &, BlockPos const&, BlockPos const&)const;
    virtual void entityInside(BlockSource &, BlockPos const&, Actor &)const;
    virtual void getSilkTouchItemInstance(Block const&)const;
    virtual bool asItemInstance(BlockSource &, BlockPos const&, Block const&)const;
    virtual void waterSpreadCausesSpawn()const;
    virtual void onRemove(BlockSource &, BlockPos const&)const;
    bool isLit(Block const&);
    CampfireBlock(std::string const&, int);
    void tryDouseFire(BlockSource &, BlockPos const&, bool);
    void _checkAlive(BlockSource &, BlockPos const&)const;
    void _getShape(Block const&, AABB &)const;
    void _canBeLit(BlockSource &, BlockPos const&);
    void _getBlockActor(BlockSource &, BlockPos const&)const;
    void _dropCookingFood(BlockSource &, BlockPos const&)const;
    void tryLightFire(BlockSource &, BlockPos const&);
};
