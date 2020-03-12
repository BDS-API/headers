#pragma once

#include <string>
#include "BlockLegacy.h"


class LeafBlock : BlockLegacy {

public:
    virtual void spawnResources(BlockSource &, BlockPos const&, Block const&, float, int)const;
    virtual void onRemove(BlockSource &, BlockPos const&)const;
    virtual void getResourceCount(Random &, Block const&, int)const;
    virtual void getColor(BlockSource &, BlockPos const&, Block const&)const;
    ~LeafBlock();
    virtual bool canContainLiquid()const;
    virtual void onGraphicsModeChanged(bool, bool, bool);
    virtual void getMapColor(BlockSource &, BlockPos const&)const;
    virtual void getExtraResourceItem(Block const&)const;
    virtual bool isSeasonTinted(Block const&, BlockSource &, BlockPos const&)const;
    virtual bool breaksFallingBlocks(Block const&)const;
    virtual void getRenderLayer(Block const&, BlockSource &, BlockPos const&)const;
    virtual void tick(BlockSource &, BlockPos const&, Random &)const;
//  virtual bool canProvideSupport(Block const&, unsigned char, BlockSupportType)const; //TODO: incomplete function definition
    virtual void getPlacementBlock(Actor &, BlockPos const&, unsigned char, Vec3 const&, int)const;
    void die(BlockSource &, BlockPos const&)const;
    void getSapling()const;
//  LeafBlock(std::string const&, int, WeakPtr<BlockLegacy>); //TODO: incomplete function definition
    bool isDeepLeafBlock(BlockSource &, BlockPos const&);
    void runDecay(BlockSource &, BlockPos const&, int);
    void getSeasonsColor(BlockSource &, BlockPos const&, int, int)const;
    void shouldStopSnowfall(Block const&);
};
