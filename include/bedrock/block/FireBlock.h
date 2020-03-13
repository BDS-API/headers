#pragma once

#include <string>
#include "BlockLegacy.h"


class FireBlock : BlockLegacy {

public:
    ~FireBlock(); // _ZN9FireBlockD2Ev
    virtual void tick(BlockSource &, BlockPos const&, Random &)const; // _ZNK9FireBlock4tickER11BlockSourceRK8BlockPosR6Random
    virtual void getAABB(BlockSource &, BlockPos const&, Block const&, AABB &, bool)const; // _ZNK9FireBlock7getAABBER11BlockSourceRK8BlockPosRK5BlockR4AABBb
    virtual void waterSpreadCausesSpawn()const; // _ZNK9FireBlock22waterSpreadCausesSpawnEv
    virtual bool canContainLiquid()const; // _ZNK9FireBlock16canContainLiquidEv
    virtual void onPlace(BlockSource &, BlockPos const&)const; // _ZNK9FireBlock7onPlaceER11BlockSourceRK8BlockPos
    virtual void mayPick()const; // _ZNK9FireBlock7mayPickEv
    virtual void mayPlace(BlockSource &, BlockPos const&)const; // _ZNK9FireBlock8mayPlaceER11BlockSourceRK8BlockPos
    virtual void neighborChanged(BlockSource &, BlockPos const&, BlockPos const&)const; // _ZNK9FireBlock15neighborChangedER11BlockSourceRK8BlockPosS4_
    virtual void getResourceCount(Random &, Block const&, int)const; // _ZNK9FireBlock16getResourceCountER6RandomRK5Blocki
    virtual void animateTick(BlockSource &, BlockPos const&, Random &)const; // _ZNK9FireBlock11animateTickER11BlockSourceRK8BlockPosR6Random
    virtual bool canBeSilkTouched()const; // _ZNK9FireBlock16canBeSilkTouchedEv
    FireBlock(std::string const&, int); // _ZN9FireBlockC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEi
    void registerFlammableBlocks(); // _ZN9FireBlock23registerFlammableBlocksEv
    void getTickDelay()const; // _ZNK9FireBlock12getTickDelayEv
    bool isValidFireLocation(BlockSource &, BlockPos const&)const; // _ZNK9FireBlock19isValidFireLocationER11BlockSourceRK8BlockPos
    bool canBurn(BlockSource &, BlockPos const&); // _ZN9FireBlock7canBurnER11BlockSourceRK8BlockPos
    void checkBurn(BlockSource &, BlockPos const&, int, Random &, int)const; // _ZNK9FireBlock9checkBurnER11BlockSourceRK8BlockPosiR6Randomi
    void getFireOdds(BlockSource &, BlockPos const&)const; // _ZNK9FireBlock11getFireOddsER11BlockSourceRK8BlockPos
    void getFlammability(BlockSource &, BlockPos const&, int)const; // _ZNK9FireBlock15getFlammabilityER11BlockSourceRK8BlockPosi
    void _tryEvictBeehive(BlockSource &, BlockPos const&)const; // _ZNK9FireBlock16_tryEvictBeehiveER11BlockSourceRK8BlockPos
};
