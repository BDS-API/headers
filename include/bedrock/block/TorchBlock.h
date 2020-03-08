#pragma once

#include "../actor/Actor"
#include "../util/Vec3"
#include "../util/Random"
#include "../util/BlockPos"
#include "unmapped/BlockSource"
#include "../../unmapped/Block"
#include "../util/AABB"


class TorchBlock : BlockLegacy {

public:
    static long DATA_FROM_FACING;
    static long FACING_FROM_DATA;

    TorchBlock::~TorchBlock()
    virtual void tick(BlockSource &, BlockPos const&, Random &)const;
    virtual void getAABB(BlockSource &, BlockPos const&, Block const&, AABB &, bool)const;
    virtual void waterSpreadCausesSpawn()const;
    virtual bool canContainLiquid()const;
    virtual void onPlace(BlockSource &, BlockPos const&)const;
    virtual void mayPlace(BlockSource &, BlockPos const&)const;
    virtual void neighborChanged(BlockSource &, BlockPos const&, BlockPos const&)const;
    virtual void getPlacementBlock(Actor &, BlockPos const&, unsigned char, Vec3 const&, int)const;
    virtual bool canSurvive(BlockSource &, BlockPos const&)const;
    virtual void getIconYOffset()const;
    virtual void getRenderLayer(Block const&, BlockSource &, BlockPos const&)const;
    virtual void getVisualShape(Block const&, AABB &, bool)const;
    virtual void animateTick(BlockSource &, BlockPos const&, Random &)const;
    virtual bool canBeSilkTouched()const;

    TorchBlock(std::string const&, int, MaterialType);
    bool canBePlacedOn(BlockSource &, BlockPos const&, unsigned char)const;
    void _checkDoPop(BlockSource &, BlockPos const&)const;
    void _flameParticlePos(BlockPos const&, TorchFacing)const;
};
