#pragma once

#include <string>
#include "BlockLegacy.h"


class SpongeBlock : BlockLegacy {

public:
    ~SpongeBlock(); // _ZN11SpongeBlockD2Ev
    virtual void tick(BlockSource &, BlockPos const&, Random &)const; // _ZNK11SpongeBlock4tickER11BlockSourceRK8BlockPosR6Random
    virtual bool isValidAuxValue(int)const; // _ZNK11SpongeBlock15isValidAuxValueEi
    virtual void onPlace(BlockSource &, BlockPos const&)const; // _ZNK11SpongeBlock7onPlaceER11BlockSourceRK8BlockPos
    virtual void neighborChanged(BlockSource &, BlockPos const&, BlockPos const&)const; // _ZNK11SpongeBlock15neighborChangedER11BlockSourceRK8BlockPosS4_
    virtual void getResourceItem(Random &, Block const&, int)const; // _ZNK11SpongeBlock15getResourceItemER6RandomRK5Blocki
    virtual std::string buildDescriptionId(Block const&)const; // _ZNK11SpongeBlock18buildDescriptionIdB5cxx11ERK5Block
    virtual bool isAuxValueRelevantForPicking()const; // _ZNK11SpongeBlock28isAuxValueRelevantForPickingEv
    virtual void animateTick(BlockSource &, BlockPos const&, Random &)const; // _ZNK11SpongeBlock11animateTickER11BlockSourceRK8BlockPosR6Random
    virtual void getSilkTouchItemInstance(Block const&)const; // _ZNK11SpongeBlock24getSilkTouchItemInstanceERK5Block
    SpongeBlock(std::string const&, int, Material const&); // _ZN11SpongeBlockC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiRK8Material
    void _evaporateWater(BlockSource &, BlockPos const&)const; // _ZNK11SpongeBlock15_evaporateWaterER11BlockSourceRK8BlockPos
    void _setShouldDry(BlockSource &, BlockPos const&)const; // _ZNK11SpongeBlock13_setShouldDryER11BlockSourceRK8BlockPos
    void _attemptAbsorbWater(BlockSource &, BlockPos const&)const; // _ZNK11SpongeBlock19_attemptAbsorbWaterER11BlockSourceRK8BlockPos
    void _performAbsorbWater(BlockSource &, BlockPos const&)const; // _ZNK11SpongeBlock19_performAbsorbWaterER11BlockSourceRK8BlockPos
    void _spawnAbsorbParticles(BlockSource &, BlockPos const&)const; // _ZNK11SpongeBlock21_spawnAbsorbParticlesER11BlockSourceRK8BlockPos
};
