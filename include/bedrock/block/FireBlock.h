#pragma once

#include "../util/Random"
#include "unmapped/BlockSource"
#include "../../unmapped/Block"
#include "../util/BlockPos"
#include "../util/AABB"


class FireBlock : BlockLegacy {

public:
    virtual FireBlock::~FireBlock()
    virtual void tick(BlockSource &, BlockPos const&, Random &)const;
    virtual void getAABB(BlockSource &, BlockPos const&, Block const&, AABB &, bool)const;
    virtual void waterSpreadCausesSpawn()const;
    virtual bool canContainLiquid()const;
    virtual void onPlace(BlockSource &, BlockPos const&)const;
    virtual void mayPick()const;
    virtual void mayPlace(BlockSource &, BlockPos const&)const;
    virtual void neighborChanged(BlockSource &, BlockPos const&, BlockPos const&)const;
    virtual void getResourceCount(Random &, Block const&, int)const;
    virtual void animateTick(BlockSource &, BlockPos const&, Random &)const;
    virtual bool canBeSilkTouched()const;

    FireBlock(std::string const&, int);
    void registerFlammableBlocks();
    void getTickDelay()const;
    bool isValidFireLocation(BlockSource &, BlockPos const&)const;
    bool canBurn(BlockSource &, BlockPos const&);
    void checkBurn(BlockSource &, BlockPos const&, int, Random &, int)const;
    void getFireOdds(BlockSource &, BlockPos const&)const;
    void getFlammability(BlockSource &, BlockPos const&, int)const;
    void _tryEvictBeehive(BlockSource &, BlockPos const&)const;
};
