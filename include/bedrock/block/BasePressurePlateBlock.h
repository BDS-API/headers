#pragma once

#include "../../unmapped/AABB"
#include "../../unmapped/BlockPos"
#include "../../unmapped/Block"
#include "../../unmapped/BlockSource"
#include "../actor/Actor"


class BasePressurePlateBlock : BlockLegacy {

public:
    virtual BasePressurePlateBlock::~BasePressurePlateBlock();
    virtual void tick(BlockSource &, BlockPos const&, Random &)const;
    virtual void getCollisionShape(AABB &, Block const&, BlockSource &, BlockPos const&, Actor *)const;
    virtual void getAABB(BlockSource &, BlockPos const&, Block const&, AABB &, bool)const;
    virtual bool isSignalSource(void)const;
    virtual void shouldConnectToRedstone(BlockSource &, BlockPos const&, int)const;
    virtual void checkIsPathable(Actor &, BlockPos const&, BlockPos const&)const;
    virtual void onPlace(BlockSource &, BlockPos const&)const;
    virtual void setupRedstoneComponent(BlockSource &, BlockPos const&)const;
    virtual void mayPlace(BlockSource &, BlockPos const&)const;
    virtual void neighborChanged(BlockSource &, BlockPos const&, BlockPos const&)const;
    virtual bool isAttachedTo(BlockSource &, BlockPos const&, BlockPos&)const;
    virtual void entityInside(BlockSource &, BlockPos const&, Actor &)const;
    virtual void getVisualShape(Block const&, AABB &, bool)const;
    virtual void getVariant(Block const&)const;
    virtual bool canSpawnOn(void)const;
    virtual void getTickDelay(void)const;
    virtual void getSensitiveAABB(BlockPos const&)const;

    BasePressurePlateBlock(std::string const&, int, Material const&);
    void checkPressed(BlockSource &, BlockPos const&, int, int)const;
};
