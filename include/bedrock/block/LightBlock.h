#pragma once

#include <string>
#include "AirBlock.h"


class LightBlock : AirBlock {

public:
    ~LightBlock(); // _ZN10LightBlockD2Ev
    virtual void getLightEmission(Block const&)const; // _ZNK10LightBlock16getLightEmissionERK5Block
    virtual void mayPlace(BlockSource &, BlockPos const&, unsigned char)const; // _ZNK10LightBlock8mayPlaceER11BlockSourceRK8BlockPosh
    virtual void mayPlace(BlockSource &, BlockPos const&)const; // _ZNK10LightBlock8mayPlaceER11BlockSourceRK8BlockPos
    virtual void tryToPlace(BlockSource &, BlockPos const&, Block const&, ActorBlockSyncMessage const*)const; // _ZNK10LightBlock10tryToPlaceER11BlockSourceRK8BlockPosRK5BlockPK21ActorBlockSyncMessage
    virtual void getPlacementBlock(Actor &, BlockPos const&, unsigned char, Vec3 const&, int)const; // _ZNK10LightBlock17getPlacementBlockER5ActorRK8BlockPoshRK4Vec3i
    virtual bool isAuxValueRelevantForPicking()const; // _ZNK10LightBlock28isAuxValueRelevantForPickingEv
    virtual void init(); // _ZN10LightBlock4initEv
    LightBlock(std::string const&, int, Material const&); // _ZN10LightBlockC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiRK8Material
};
