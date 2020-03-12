#pragma once

#include "../util/BlockPos.h"
#include "unmapped/BlockSource.h"
#include <string>
#include "../actor/Actor.h"
#include "../util/Vec3.h"
#include "../../unmapped/Block.h"
#include "BlockLegacy.h"
#include "../util/Random.h"


class LeafBlock : BlockLegacy {

public:
    virtual void getColor(BlockSource &, BlockPos const&, Block const&)const;
    virtual void getResourceCount(Random &, Block const&, int)const;
    virtual void onGraphicsModeChanged(bool, bool, bool);
    virtual void getRenderLayer(Block const&, BlockSource &, BlockPos const&)const;
    ~LeafBlock();
//  virtual bool canProvideSupport(Block const&, unsigned char, BlockSupportType)const; //TODO: incomplete function definition
    virtual void getPlacementBlock(Actor &, BlockPos const&, unsigned char, Vec3 const&, int)const;
    virtual void tick(BlockSource &, BlockPos const&, Random &)const;
    virtual void getExtraResourceItem(Block const&)const;
    virtual bool canContainLiquid()const;
    virtual bool breaksFallingBlocks(Block const&)const;
    virtual void onRemove(BlockSource &, BlockPos const&)const;
    virtual void spawnResources(BlockSource &, BlockPos const&, Block const&, float, int)const;
    virtual void getMapColor(BlockSource &, BlockPos const&)const;
    virtual bool isSeasonTinted(Block const&, BlockSource &, BlockPos const&)const;
    void getSapling()const;
    void die(BlockSource &, BlockPos const&)const;
    void getSeasonsColor(BlockSource &, BlockPos const&, int, int)const;
    void shouldStopSnowfall(Block const&);
    bool isDeepLeafBlock(BlockSource &, BlockPos const&);
    void runDecay(BlockSource &, BlockPos const&, int);
//  LeafBlock(std::string const&, int, WeakPtr<BlockLegacy>); //TODO: incomplete function definition
};
