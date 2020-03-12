#pragma once

#include <string>
#include "BlockLegacy.h"


class BasePressurePlateBlock : BlockLegacy {

public:
    virtual void getSensitiveAABB(BlockPos const&)const;
    virtual void neighborChanged(BlockSource &, BlockPos const&, BlockPos const&)const;
    virtual void getVisualShape(Block const&, AABB &, bool)const;
    virtual void mayPlace(BlockSource &, BlockPos const&)const;
    virtual bool isSignalSource()const;
    virtual void tick(BlockSource &, BlockPos const&, Random &)const;
    virtual void entityInside(BlockSource &, BlockPos const&, Actor &)const;
    virtual bool canSpawnOn()const;
    virtual void getAABB(BlockSource &, BlockPos const&, Block const&, AABB &, bool)const;
    virtual void onPlace(BlockSource &, BlockPos const&)const;
    ~BasePressurePlateBlock();
    virtual void setupRedstoneComponent(BlockSource &, BlockPos const&)const;
    virtual void checkIsPathable(Actor &, BlockPos const&, BlockPos const&)const;
    virtual bool isAttachedTo(BlockSource &, BlockPos const&, BlockPos &)const;
    virtual void getVariant(Block const&)const;
    virtual void getCollisionShape(AABB &, Block const&, BlockSource &, BlockPos const&, Actor *)const;
    virtual void shouldConnectToRedstone(BlockSource &, BlockPos const&, int)const;
    virtual void getTickDelay()const;
    void checkPressed(BlockSource &, BlockPos const&, int, int)const;
    BasePressurePlateBlock(std::string const&, int, Material const&);
};
