#pragma once

#include <string>
#include "HeavyBlock.h"


class AnvilBlock : HeavyBlock {

public:
    ~AnvilBlock(); // _ZN10AnvilBlockD2Ev
    virtual void getAABB(BlockSource &, BlockPos const&, Block const&, AABB &, bool)const; // _ZNK10AnvilBlock7getAABBER11BlockSourceRK8BlockPosRK5BlockR4AABBb
    virtual void getLiquidClipVolume(BlockSource &, BlockPos const&, AABB &)const; // _ZNK10AnvilBlock19getLiquidClipVolumeER11BlockSourceRK8BlockPosR4AABB
    virtual bool isCraftingBlock()const; // _ZNK10AnvilBlock15isCraftingBlockEv
    virtual bool canContainLiquid()const; // _ZNK10AnvilBlock16canContainLiquidEv
    virtual bool breaksFallingBlocks(Block const&)const; // _ZNK10AnvilBlock19breaksFallingBlocksERK5Block
    virtual void getResourceItem(Random &, Block const&, int)const; // _ZNK10AnvilBlock15getResourceItemER6RandomRK5Blocki
    virtual bool asItemInstance(BlockSource &, BlockPos const&, Block const&)const; // _ZNK10AnvilBlock14asItemInstanceER11BlockSourceRK8BlockPosRK5Block
    virtual void use(Player &, BlockPos const&)const; // _ZNK10AnvilBlock3useER6PlayerRK8BlockPos
    virtual void getPlacementBlock(Actor &, BlockPos const&, unsigned char, Vec3 const&, int)const; // _ZNK10AnvilBlock17getPlacementBlockER5ActorRK8BlockPoshRK4Vec3i
    virtual std::string buildDescriptionId(Block const&)const; // _ZNK10AnvilBlock18buildDescriptionIdB5cxx11ERK5Block
    virtual bool isAuxValueRelevantForPicking()const; // _ZNK10AnvilBlock28isAuxValueRelevantForPickingEv
    virtual void getVariant(Block const&)const; // _ZNK10AnvilBlock10getVariantERK5Block
    virtual void animateTick(BlockSource &, BlockPos const&, Random &)const; // _ZNK10AnvilBlock11animateTickER11BlockSourceRK8BlockPosR6Random
    virtual bool canBeSilkTouched()const; // _ZNK10AnvilBlock16canBeSilkTouchedEv
    virtual void getSilkTouchItemInstance(Block const&)const; // _ZNK10AnvilBlock24getSilkTouchItemInstanceERK5Block
    virtual void getDustColor(Block const&)const; // _ZNK10AnvilBlock12getDustColorERK5Block
    virtual std::string getDustParticleName(Block const&)const; // _ZNK10AnvilBlock19getDustParticleNameB5cxx11ERK5Block
    virtual void falling()const; // _ZNK10AnvilBlock7fallingEv
    virtual void onLand(BlockSource &, BlockPos const&)const; // _ZNK10AnvilBlock6onLandER11BlockSourceRK8BlockPos
    AnvilBlock(std::string const&, int); // _ZN10AnvilBlockC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEi
    bool isCubeShaped(); // _ZN10AnvilBlock12isCubeShapedEv
    bool isSolidRender()const; // _ZNK10AnvilBlock13isSolidRenderEv
};
