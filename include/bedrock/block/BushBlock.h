#pragma once

#include <string>
#include "BlockLegacy.h"


class BushBlock : BlockLegacy {

public:
    static long MAX_GROWTH;

    ~BushBlock(); // _ZN9BushBlockD2Ev
    virtual void tick(BlockSource &, BlockPos const&, Random &)const; // _ZNK9BushBlock4tickER11BlockSourceRK8BlockPosR6Random
    virtual void getAABB(BlockSource &, BlockPos const&, Block const&, AABB &, bool)const; // _ZNK9BushBlock7getAABBER11BlockSourceRK8BlockPosRK5BlockR4AABBb
    virtual void waterSpreadCausesSpawn()const; // _ZNK9BushBlock22waterSpreadCausesSpawnEv
    virtual void mayPlaceOn(BlockSource &, BlockPos const&)const; // _ZNK9BushBlock10mayPlaceOnER11BlockSourceRK8BlockPos
    virtual void neighborChanged(BlockSource &, BlockPos const&, BlockPos const&)const; // _ZNK9BushBlock15neighborChangedER11BlockSourceRK8BlockPosS4_
    virtual bool canSurvive(BlockSource &, BlockPos const&)const; // _ZNK9BushBlock10canSurviveER11BlockSourceRK8BlockPos
    virtual void checkAlive(BlockSource &, BlockPos const&)const; // _ZNK9BushBlock10checkAliveER11BlockSourceRK8BlockPos
    BushBlock(std::string const&, int, Material const&); // _ZN9BushBlockC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiRK8Material
//  void growCrops(BlockSource &, BlockPos const&, FertilizerType)const; //TODO: incomplete function definition // _ZNK9BushBlock9growCropsER11BlockSourceRK8BlockPos14FertilizerType
};
