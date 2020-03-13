#pragma once

#include <string>
#include "HeavyBlock.h"


class ScaffoldingBlock : HeavyBlock {

public:
    static long MAX_STABILITY;

    ~ScaffoldingBlock(); // _ZN16ScaffoldingBlockD2Ev
    virtual void tick(BlockSource &, BlockPos const&, Random &)const; // _ZNK16ScaffoldingBlock4tickER11BlockSourceRK8BlockPosR6Random
    virtual void getCollisionShape(AABB &, Block const&, BlockSource &, BlockPos const&, Actor *)const; // _ZNK16ScaffoldingBlock17getCollisionShapeER4AABBRK5BlockR11BlockSourceRK8BlockPosP5Actor
    virtual void getAABB(BlockSource &, BlockPos const&, Block const&, AABB &, bool)const; // _ZNK16ScaffoldingBlock7getAABBER11BlockSourceRK8BlockPosRK5BlockR4AABBb
    virtual bool isWaterBlocking()const; // _ZNK16ScaffoldingBlock15isWaterBlockingEv
    virtual void waterSpreadCausesSpawn()const; // _ZNK16ScaffoldingBlock22waterSpreadCausesSpawnEv
    virtual bool canContainLiquid()const; // _ZNK16ScaffoldingBlock16canContainLiquidEv
    virtual void checkIsPathable(Actor &, BlockPos const&, BlockPos const&)const; // _ZNK16ScaffoldingBlock15checkIsPathableER5ActorRK8BlockPosS4_
    virtual void onPlace(BlockSource &, BlockPos const&)const; // _ZNK16ScaffoldingBlock7onPlaceER11BlockSourceRK8BlockPos
    virtual void mayPlace(BlockSource &, BlockPos const&)const; // _ZNK16ScaffoldingBlock8mayPlaceER11BlockSourceRK8BlockPos
    virtual bool breaksFallingBlocks(Block const&)const; // _ZNK16ScaffoldingBlock19breaksFallingBlocksERK5Block
    virtual void neighborChanged(BlockSource &, BlockPos const&, BlockPos const&)const; // _ZNK16ScaffoldingBlock15neighborChangedER11BlockSourceRK8BlockPosS4_
    virtual void clip(BlockSource &, BlockPos const&, Vec3 const&, Vec3 const&, bool)const; // _ZNK16ScaffoldingBlock4clipER11BlockSourceRK8BlockPosRK4Vec3S7_b
    virtual void getPlacementBlock(Actor &, BlockPos const&, unsigned char, Vec3 const&, int)const; // _ZNK16ScaffoldingBlock17getPlacementBlockER5ActorRK8BlockPoshRK4Vec3i
    virtual bool canSlide(BlockSource &, BlockPos const&)const; // _ZNK16ScaffoldingBlock8canSlideER11BlockSourceRK8BlockPos
    virtual void animateTick(BlockSource &, BlockPos const&, Random &)const; // _ZNK16ScaffoldingBlock11animateTickER11BlockSourceRK8BlockPosR6Random
    virtual void getDustColor(Block const&)const; // _ZNK16ScaffoldingBlock12getDustColorERK5Block
    virtual std::string getDustParticleName(Block const&)const; // _ZNK16ScaffoldingBlock19getDustParticleNameB5cxx11ERK5Block
    ScaffoldingBlock(std::string const&, int); // _ZN16ScaffoldingBlockC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEi
    void _updateBlockStability(BlockSource &, BlockPos const&)const; // _ZNK16ScaffoldingBlock21_updateBlockStabilityER11BlockSourceRK8BlockPos
    void _isAboveSupportingBlock(BlockSource const&, BlockPos const&)const; // _ZNK16ScaffoldingBlock23_isAboveSupportingBlockERK11BlockSourceRK8BlockPos
    void calculateStability(BlockSource const&, BlockPos const&)const; // _ZNK16ScaffoldingBlock18calculateStabilityERK11BlockSourceRK8BlockPos
};
