#pragma once

#include <string>
#include "BlockLegacy.h"


class ClayBlock : BlockLegacy {

public:
    ~ClayBlock(); // _ZN9ClayBlockD2Ev
    virtual bool canBeOriginalSurface()const; // _ZNK9ClayBlock20canBeOriginalSurfaceEv
//  virtual void onFertilized(BlockSource &, BlockPos const&, Actor *, FertilizerType)const; //TODO: incomplete function definition // _ZNK9ClayBlock12onFertilizedER11BlockSourceRK8BlockPosP5Actor14FertilizerType
    virtual void mayConsumeFertilizer(BlockSource &)const; // _ZNK9ClayBlock20mayConsumeFertilizerER11BlockSource
    virtual void getResourceCount(Random &, Block const&, int)const; // _ZNK9ClayBlock16getResourceCountER6RandomRK5Blocki
    virtual void getResourceItem(Random &, Block const&, int)const; // _ZNK9ClayBlock15getResourceItemER6RandomRK5Blocki
    ClayBlock(std::string const&, int); // _ZN9ClayBlockC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEi
};
