#pragma once

#include <string>
#include "BlockLegacy.h"


class KelpBlock : BlockLegacy {

public:
    ~KelpBlock(); // _ZN9KelpBlockD2Ev
    virtual void tick(BlockSource &, BlockPos const&, Random &)const; // _ZNK9KelpBlock4tickER11BlockSourceRK8BlockPosR6Random
    virtual void getAABB(BlockSource &, BlockPos const&, Block const&, AABB &, bool)const; // _ZNK9KelpBlock7getAABBER11BlockSourceRK8BlockPosRK5BlockR4AABBb
    virtual void waterSpreadCausesSpawn()const; // _ZNK9KelpBlock22waterSpreadCausesSpawnEv
    virtual bool canContainLiquid()const; // _ZNK9KelpBlock16canContainLiquidEv
    virtual void onPlace(BlockSource &, BlockPos const&)const; // _ZNK9KelpBlock7onPlaceER11BlockSourceRK8BlockPos
//  virtual void onFertilized(BlockSource &, BlockPos const&, Actor *, FertilizerType)const; //TODO: incomplete function definition // _ZNK9KelpBlock12onFertilizedER11BlockSourceRK8BlockPosP5Actor14FertilizerType
    virtual void mayConsumeFertilizer(BlockSource &)const; // _ZNK9KelpBlock20mayConsumeFertilizerER11BlockSource
    virtual void mayPlace(BlockSource &, BlockPos const&)const; // _ZNK9KelpBlock8mayPlaceER11BlockSourceRK8BlockPos
    virtual void neighborChanged(BlockSource &, BlockPos const&, BlockPos const&)const; // _ZNK9KelpBlock15neighborChangedER11BlockSourceRK8BlockPosS4_
    virtual void getResourceItem(Random &, Block const&, int)const; // _ZNK9KelpBlock15getResourceItemER6RandomRK5Blocki
    virtual bool asItemInstance(BlockSource &, BlockPos const&, Block const&)const; // _ZNK9KelpBlock14asItemInstanceER11BlockSourceRK8BlockPosRK5Block
    virtual bool canSurvive(BlockSource &, BlockPos const&)const; // _ZNK9KelpBlock10canSurviveER11BlockSourceRK8BlockPos
    virtual void getColor(Block const&)const; // _ZNK9KelpBlock8getColorERK5Block
    virtual void onGraphicsModeChanged(bool, bool, bool); // _ZN9KelpBlock21onGraphicsModeChangedEbbb
    virtual bool canBeSilkTouched()const; // _ZNK9KelpBlock16canBeSilkTouchedEv
    KelpBlock(std::string const&, int); // _ZN9KelpBlockC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEi
    void checkAlive(BlockSource &, BlockPos const&)const; // _ZNK9KelpBlock10checkAliveER11BlockSourceRK8BlockPos
    void shouldGrow(BlockSource &, BlockPos const&)const; // _ZNK9KelpBlock10shouldGrowER11BlockSourceRK8BlockPos
    void getAge(Block const&)const; // _ZNK9KelpBlock6getAgeERK5Block
    void _tryGrow(BlockSource &, BlockPos const&, int)const; // _ZNK9KelpBlock8_tryGrowER11BlockSourceRK8BlockPosi
};
