#pragma once

#include "unmapped/BlockSource.h"
#include "../util/BlockPos.h"
#include <string>
#include "../actor/Actor.h"
#include "ActorBlock.h"
#include "../util/Vec3.h"
#include "../../unmapped/Block.h"
#include "../util/Random.h"


class PistonBlock : ActorBlock {

public:
    static long ARM_DIRECTION_OFFSETS;

    virtual void onRedstoneUpdate(BlockSource &, BlockPos const&, int, bool)const;
    virtual void getResourceItem(Random &, Block const&, int)const;
//  virtual bool canProvideSupport(Block const&, unsigned char, BlockSupportType)const; //TODO: incomplete function definition
    virtual bool breaksFallingBlocks(Block const&)const;
    virtual bool asItemInstance(BlockSource &, BlockPos const&, Block const&)const;
    virtual void onPlace(BlockSource &, BlockPos const&)const;
    virtual void getPlacementBlock(Actor &, BlockPos const&, unsigned char, Vec3 const&, int)const;
    virtual bool canContainLiquid()const;
    virtual void getSecondPart(BlockSource &, BlockPos const&, BlockPos &)const;
    virtual bool isValidAuxValue(int)const;
    virtual void getVariant(Block const&)const;
    virtual void getMappedFace(unsigned char, Block const&)const;
    virtual void shouldConnectToRedstone(BlockSource &, BlockPos const&, int)const;
    ~PistonBlock();
    virtual bool pushesUpFallingBlocks()const;
    virtual void neighborChanged(BlockSource &, BlockPos const&, BlockPos const&)const;
    virtual void setupRedstoneComponent(BlockSource &, BlockPos const&)const;
    bool isSticky()const;
//  PistonBlock(std::string const&, int, PistonBlock::Type); //TODO: incomplete function definition
    void getFacingDir(unsigned char);
};
