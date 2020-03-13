#pragma once

#include <string>
#include "HeavyBlock.h"


class SandBlock : HeavyBlock {

public:
    ~SandBlock(); // _ZN9SandBlockD2Ev
    virtual bool canBeOriginalSurface()const; // _ZNK9SandBlock20canBeOriginalSurfaceEv
//  virtual void onFertilized(BlockSource &, BlockPos const&, Actor *, FertilizerType)const; //TODO: incomplete function definition // _ZNK9SandBlock12onFertilizedER11BlockSourceRK8BlockPosP5Actor14FertilizerType
    virtual void mayConsumeFertilizer(BlockSource &)const; // _ZNK9SandBlock20mayConsumeFertilizerER11BlockSource
    virtual void neighborChanged(BlockSource &, BlockPos const&, BlockPos const&)const; // _ZNK9SandBlock15neighborChangedER11BlockSourceRK8BlockPosS4_
    virtual void getResourceItem(Random &, Block const&, int)const; // _ZNK9SandBlock15getResourceItemER6RandomRK5Blocki
    virtual void getMapColor(BlockSource &, BlockPos const&)const; // _ZNK9SandBlock11getMapColorER11BlockSourceRK8BlockPos
    virtual std::string buildDescriptionId(Block const&)const; // _ZNK9SandBlock18buildDescriptionIdB5cxx11ERK5Block
    virtual bool isAuxValueRelevantForPicking()const; // _ZNK9SandBlock28isAuxValueRelevantForPickingEv
    virtual void getVariant(Block const&)const; // _ZNK9SandBlock10getVariantERK5Block
    virtual void getSilkTouchItemInstance(Block const&)const; // _ZNK9SandBlock24getSilkTouchItemInstanceERK5Block
    virtual void getDustColor(Block const&)const; // _ZNK9SandBlock12getDustColorERK5Block
    virtual std::string getDustParticleName(Block const&)const; // _ZNK9SandBlock19getDustParticleNameB5cxx11ERK5Block
    SandBlock(std::string const&, int); // _ZN9SandBlockC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEi
};
