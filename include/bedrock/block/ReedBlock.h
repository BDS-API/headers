#pragma once

#include <string>
#include "BlockLegacy.h"


class ReedBlock : BlockLegacy {

public:
    ~ReedBlock(); // _ZN9ReedBlockD2Ev
    virtual void tick(BlockSource &, BlockPos const&, Random &)const; // _ZNK9ReedBlock4tickER11BlockSourceRK8BlockPosR6Random
    virtual void getAABB(BlockSource &, BlockPos const&, Block const&, AABB &, bool)const; // _ZNK9ReedBlock7getAABBER11BlockSourceRK8BlockPosRK5BlockR4AABBb
    virtual void waterSpreadCausesSpawn()const; // _ZNK9ReedBlock22waterSpreadCausesSpawnEv
    virtual bool canContainLiquid()const; // _ZNK9ReedBlock16canContainLiquidEv
//  virtual void onFertilized(BlockSource &, BlockPos const&, Actor *, FertilizerType)const; //TODO: incomplete function definition // _ZNK9ReedBlock12onFertilizedER11BlockSourceRK8BlockPosP5Actor14FertilizerType
    virtual void mayPlace(BlockSource &, BlockPos const&)const; // _ZNK9ReedBlock8mayPlaceER11BlockSourceRK8BlockPos
    virtual void neighborChanged(BlockSource &, BlockPos const&, BlockPos const&)const; // _ZNK9ReedBlock15neighborChangedER11BlockSourceRK8BlockPosS4_
    virtual void getResourceItem(Random &, Block const&, int)const; // _ZNK9ReedBlock15getResourceItemER6RandomRK5Blocki
    virtual bool asItemInstance(BlockSource &, BlockPos const&, Block const&)const; // _ZNK9ReedBlock14asItemInstanceER11BlockSourceRK8BlockPosRK5Block
    virtual bool canSurvive(BlockSource &, BlockPos const&)const; // _ZNK9ReedBlock10canSurviveER11BlockSourceRK8BlockPos
    virtual void getColor(Block const&)const; // _ZNK9ReedBlock8getColorERK5Block
    virtual void getColorAtPos(BlockSource &, BlockPos const&)const; // _ZNK9ReedBlock13getColorAtPosER11BlockSourceRK8BlockPos
    virtual void getColor(BlockSource &, BlockPos const&, Block const&)const; // _ZNK9ReedBlock8getColorER11BlockSourceRK8BlockPosRK5Block
    virtual void onGraphicsModeChanged(bool, bool, bool); // _ZN9ReedBlock21onGraphicsModeChangedEbbb
    virtual bool canBeSilkTouched()const; // _ZNK9ReedBlock16canBeSilkTouchedEv
    ReedBlock(std::string const&, int); // _ZN9ReedBlockC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEi
    void checkAlive(BlockSource &, BlockPos const&)const; // _ZNK9ReedBlock10checkAliveER11BlockSourceRK8BlockPos
};
