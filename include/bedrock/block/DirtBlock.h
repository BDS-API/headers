#pragma once

#include <string>
#include "BlockLegacy.h"


class DirtBlock : BlockLegacy {

public:
    ~DirtBlock(); // _ZN9DirtBlockD2Ev
    virtual bool canBeOriginalSurface()const; // _ZNK9DirtBlock20canBeOriginalSurfaceEv
//  virtual void onFertilized(BlockSource &, BlockPos const&, Actor *, FertilizerType)const; //TODO: incomplete function definition // _ZNK9DirtBlock12onFertilizedER11BlockSourceRK8BlockPosP5Actor14FertilizerType
    virtual void mayConsumeFertilizer(BlockSource &)const; // _ZNK9DirtBlock20mayConsumeFertilizerER11BlockSource
    virtual void neighborChanged(BlockSource &, BlockPos const&, BlockPos const&)const; // _ZNK9DirtBlock15neighborChangedER11BlockSourceRK8BlockPosS4_
    virtual void getResourceItem(Random &, Block const&, int)const; // _ZNK9DirtBlock15getResourceItemER6RandomRK5Blocki
    virtual std::string buildDescriptionId(Block const&)const; // _ZNK9DirtBlock18buildDescriptionIdB5cxx11ERK5Block
    virtual bool isAuxValueRelevantForPicking()const; // _ZNK9DirtBlock28isAuxValueRelevantForPickingEv
    virtual void getVariant(Block const&)const; // _ZNK9DirtBlock10getVariantERK5Block
    virtual void getSilkTouchItemInstance(Block const&)const; // _ZNK9DirtBlock24getSilkTouchItemInstanceERK5Block
    DirtBlock(std::string const&, int); // _ZN9DirtBlockC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEi
};
