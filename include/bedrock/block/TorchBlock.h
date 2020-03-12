#pragma once

#include "../util/AABB.h"
#include "../util/BlockPos.h"
#include "unmapped/BlockSource.h"
#include <string>
#include "../actor/Actor.h"
#include "../util/Vec3.h"
#include "../../unmapped/Block.h"
#include "BlockLegacy.h"
#include "../util/Random.h"


class TorchBlock : BlockLegacy {

public:
    static long DATA_FROM_FACING;
    static long FACING_FROM_DATA;

    ~TorchBlock();
    virtual void getIconYOffset()const;
    virtual bool canBeSilkTouched()const;
    virtual void waterSpreadCausesSpawn()const;
    virtual void neighborChanged(BlockSource &, BlockPos const&, BlockPos const&)const;
    virtual bool canSurvive(BlockSource &, BlockPos const&)const;
    virtual void animateTick(BlockSource &, BlockPos const&, Random &)const;
    virtual void getRenderLayer(Block const&, BlockSource &, BlockPos const&)const;
    virtual void getPlacementBlock(Actor &, BlockPos const&, unsigned char, Vec3 const&, int)const;
    virtual bool canContainLiquid()const;
    virtual void onPlace(BlockSource &, BlockPos const&)const;
    virtual void getVisualShape(Block const&, AABB &, bool)const;
    virtual void getAABB(BlockSource &, BlockPos const&, Block const&, AABB &, bool)const;
    virtual void tick(BlockSource &, BlockPos const&, Random &)const;
    virtual void mayPlace(BlockSource &, BlockPos const&)const;
    bool canBePlacedOn(BlockSource &, BlockPos const&, unsigned char)const;
//  TorchBlock(std::string const&, int, MaterialType); //TODO: incomplete function definition
//  void _flameParticlePos(BlockPos const&, TorchFacing)const; //TODO: incomplete function definition
    void _checkDoPop(BlockSource &, BlockPos const&)const;
};
