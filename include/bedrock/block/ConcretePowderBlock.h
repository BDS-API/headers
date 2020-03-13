#pragma once

#include <string>
#include <optional>
#include "HeavyBlock.h"


class ConcretePowderBlock : HeavyBlock {

public:
    ~ConcretePowderBlock(); // _ZN19ConcretePowderBlockD2Ev
    virtual bool isValidAuxValue(int)const; // _ZNK19ConcretePowderBlock15isValidAuxValueEi
    virtual void onPlace(BlockSource &, BlockPos const&)const; // _ZNK19ConcretePowderBlock7onPlaceER11BlockSourceRK8BlockPos
    virtual void neighborChanged(BlockSource &, BlockPos const&, BlockPos const&)const; // _ZNK19ConcretePowderBlock15neighborChangedER11BlockSourceRK8BlockPosS4_
    virtual void getResourceItem(Random &, Block const&, int)const; // _ZNK19ConcretePowderBlock15getResourceItemER6RandomRK5Blocki
    virtual void getMapColor(BlockSource &, BlockPos const&)const; // _ZNK19ConcretePowderBlock11getMapColorER11BlockSourceRK8BlockPos
    virtual void shouldStopFalling(Actor &)const; // _ZNK19ConcretePowderBlock17shouldStopFallingER5Actor
    virtual std::string buildDescriptionId(Block const&)const; // _ZNK19ConcretePowderBlock18buildDescriptionIdB5cxx11ERK5Block
    virtual bool isAuxValueRelevantForPicking()const; // _ZNK19ConcretePowderBlock28isAuxValueRelevantForPickingEv
    virtual void getSilkTouchItemInstance(Block const&)const; // _ZNK19ConcretePowderBlock24getSilkTouchItemInstanceERK5Block
    virtual void getDustColor(Block const&)const; // _ZNK19ConcretePowderBlock12getDustColorERK5Block
    virtual std::string getDustParticleName(Block const&)const; // _ZNK19ConcretePowderBlock19getDustParticleNameB5cxx11ERK5Block
    ConcretePowderBlock(std::string const&, int); // _ZN19ConcretePowderBlockC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEi
    void _tryTouchWater(BlockSource &, BlockPos const&, std::optional<BlockColor>)const; // _ZNK19ConcretePowderBlock14_tryTouchWaterER11BlockSourceRK8BlockPosSt8optionalI10BlockColorE
};
