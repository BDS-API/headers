#pragma once

#include <string>
#include "BlockLegacy.h"


class SlimeBlock : BlockLegacy {

public:
    ~SlimeBlock(); // _ZN10SlimeBlockD2Ev
    virtual void onStepOn(Actor &, BlockPos const&)const; // _ZNK10SlimeBlock8onStepOnER5ActorRK8BlockPos
    virtual void onFallOn(BlockSource &, BlockPos const&, Actor *, float)const; // _ZNK10SlimeBlock8onFallOnER11BlockSourceRK8BlockPosP5Actorf
    virtual void updateEntityAfterFallOn(Actor &)const; // _ZNK10SlimeBlock23updateEntityAfterFallOnER5Actor
    virtual bool isBounceBlock()const; // _ZNK10SlimeBlock13isBounceBlockEv
    virtual void getExtraRenderLayers()const; // _ZNK10SlimeBlock20getExtraRenderLayersEv
    SlimeBlock(std::string const&, int, Material const&); // _ZN10SlimeBlockC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiRK8Material
};
