#pragma once

#include <string>
#include "BlockLegacy.h"


class LeafBlock : BlockLegacy {

public:
    ~LeafBlock(); // _ZN9LeafBlockD2Ev
    virtual void tick(BlockSource &, BlockPos const&, Random &)const; // _ZNK9LeafBlock4tickER11BlockSourceRK8BlockPosR6Random
//  virtual bool canProvideSupport(Block const&, unsigned char, BlockSupportType)const; //TODO: incomplete function definition // _ZNK9LeafBlock17canProvideSupportERK5Blockh16BlockSupportType
    virtual bool canContainLiquid()const; // _ZNK9LeafBlock16canContainLiquidEv
    virtual void onRemove(BlockSource &, BlockPos const&)const; // _ZNK9LeafBlock8onRemoveER11BlockSourceRK8BlockPos
    virtual bool breaksFallingBlocks(Block const&)const; // _ZNK9LeafBlock19breaksFallingBlocksERK5Block
    virtual void getResourceCount(Random &, Block const&, int)const; // _ZNK9LeafBlock16getResourceCountER6RandomRK5Blocki
    virtual void spawnResources(BlockSource &, BlockPos const&, Block const&, float, int)const; // _ZNK9LeafBlock14spawnResourcesER11BlockSourceRK8BlockPosRK5Blockfi
    virtual void getPlacementBlock(Actor &, BlockPos const&, unsigned char, Vec3 const&, int)const; // _ZNK9LeafBlock17getPlacementBlockER5ActorRK8BlockPoshRK4Vec3i
    virtual void getMapColor(BlockSource &, BlockPos const&)const; // _ZNK9LeafBlock11getMapColorER11BlockSourceRK8BlockPos
    virtual void getColor(BlockSource &, BlockPos const&, Block const&)const; // _ZNK9LeafBlock8getColorER11BlockSourceRK8BlockPosRK5Block
    virtual bool isSeasonTinted(Block const&, BlockSource &, BlockPos const&)const; // _ZNK9LeafBlock14isSeasonTintedERK5BlockR11BlockSourceRK8BlockPos
    virtual void onGraphicsModeChanged(bool, bool, bool); // _ZN9LeafBlock21onGraphicsModeChangedEbbb
    virtual void getRenderLayer(Block const&, BlockSource &, BlockPos const&)const; // _ZNK9LeafBlock14getRenderLayerERK5BlockR11BlockSourceRK8BlockPos
    virtual void getExtraResourceItem(Block const&)const; // _ZNK9LeafBlock20getExtraResourceItemERK5Block
    bool isDeepLeafBlock(BlockSource &, BlockPos const&); // _ZN9LeafBlock15isDeepLeafBlockER11BlockSourceRK8BlockPos
    void shouldStopSnowfall(Block const&); // _ZN9LeafBlock18shouldStopSnowfallERK5Block
//  LeafBlock(std::string const&, int, WeakPtr<BlockLegacy>); //TODO: incomplete function definition // _ZN9LeafBlockC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEi7WeakPtrI11BlockLegacyE
    void runDecay(BlockSource &, BlockPos const&, int); // _ZN9LeafBlock8runDecayER11BlockSourceRK8BlockPosi
    void getSeasonsColor(BlockSource &, BlockPos const&, int, int)const; // _ZNK9LeafBlock15getSeasonsColorER11BlockSourceRK8BlockPosii
    void die(BlockSource &, BlockPos const&)const; // _ZNK9LeafBlock3dieER11BlockSourceRK8BlockPos
    void getSapling()const; // _ZNK9LeafBlock10getSaplingEv
};
