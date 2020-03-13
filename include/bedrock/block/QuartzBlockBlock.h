#pragma once

#include "RotatedPillarBlock.h"
#include <string>


class QuartzBlockBlock : RotatedPillarBlock {

public:
    ~QuartzBlockBlock(); // _ZN16QuartzBlockBlockD2Ev
    virtual void getResourceItem(Random &, Block const&, int)const; // _ZNK16QuartzBlockBlock15getResourceItemER6RandomRK5Blocki
    virtual bool asItemInstance(BlockSource &, BlockPos const&, Block const&)const; // _ZNK16QuartzBlockBlock14asItemInstanceER11BlockSourceRK8BlockPosRK5Block
    virtual void getPlacementBlock(Actor &, BlockPos const&, unsigned char, Vec3 const&, int)const; // _ZNK16QuartzBlockBlock17getPlacementBlockER5ActorRK8BlockPoshRK4Vec3i
    virtual std::string buildDescriptionId(Block const&)const; // _ZNK16QuartzBlockBlock18buildDescriptionIdB5cxx11ERK5Block
    virtual bool isAuxValueRelevantForPicking()const; // _ZNK16QuartzBlockBlock28isAuxValueRelevantForPickingEv
    virtual void getVariant(Block const&)const; // _ZNK16QuartzBlockBlock10getVariantERK5Block
    virtual void getMappedFace(unsigned char, Block const&)const; // _ZNK16QuartzBlockBlock13getMappedFaceEhRK5Block
    virtual void getSilkTouchItemInstance(Block const&)const; // _ZNK16QuartzBlockBlock24getSilkTouchItemInstanceERK5Block
    QuartzBlockBlock(std::string const&, int); // _ZN16QuartzBlockBlockC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEi
};
