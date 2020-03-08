#pragma once

#include "../util/Random"
#include "unmapped/BlockSource"
#include "../../unmapped/Block"
#include "../util/BlockPos"
#include "../actor/Player"


class ChorusFlowerBlock : BlockLegacy {

public:
    static long DEAD_AGE;
    static long GROW_RATE;
    static long BRANCH_DIRECTIONS;

    virtual ChorusFlowerBlock::~ChorusFlowerBlock()
    virtual void tick(BlockSource &, BlockPos const&, Random &)const;
    virtual bool canProvideSupport(Block const&, unsigned char, BlockSupportType)const;
    virtual bool isWaterBlocking()const;
    virtual void waterSpreadCausesSpawn()const;
    virtual bool canContainLiquid()const;
    virtual void mayPlace(BlockSource &, BlockPos const&)const;
    virtual void neighborChanged(BlockSource &, BlockPos const&, BlockPos const&)const;
    virtual void getResourceCount(Random &, Block const&, int)const;
    virtual void playerDestroy(Player &, BlockPos const&, Block const&)const;
    virtual bool canSurvive(BlockSource &, BlockPos const&)const;
    virtual void getVariant(Block const&)const;

    ChorusFlowerBlock(std::string const&, int);
    void _allNeighborsEmpty(BlockSource &, BlockPos const&, unsigned char);
    void _placeGrownFlower(BlockSource &, BlockPos const&, int)const;
    void _placeDeadFlower(BlockSource &, BlockPos const&)const;
    void generatePlant(BlockSource &, BlockPos const&, Random &, int);
    void _growTreeRecursive(BlockSource &, BlockPos const&, BlockPos const&, Random &, int, int);
};
