#pragma once

#include <string>
#include "HeavyBlock.h"


class GravelBlock : HeavyBlock {

public:
    ~GravelBlock(); // _ZN11GravelBlockD2Ev
    virtual bool canBeOriginalSurface()const; // _ZNK11GravelBlock20canBeOriginalSurfaceEv
//  virtual void onFertilized(BlockSource &, BlockPos const&, Actor *, FertilizerType)const; //TODO: incomplete function definition // _ZNK11GravelBlock12onFertilizedER11BlockSourceRK8BlockPosP5Actor14FertilizerType
    virtual void mayConsumeFertilizer(BlockSource &)const; // _ZNK11GravelBlock20mayConsumeFertilizerER11BlockSource
    virtual void getResourceItem(Random &, Block const&, int)const; // _ZNK11GravelBlock15getResourceItemER6RandomRK5Blocki
    virtual void getDustColor(Block const&)const; // _ZNK11GravelBlock12getDustColorERK5Block
    virtual std::string getDustParticleName(Block const&)const; // _ZNK11GravelBlock19getDustParticleNameB5cxx11ERK5Block
    GravelBlock(std::string const&, int); // _ZN11GravelBlockC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEi
};
