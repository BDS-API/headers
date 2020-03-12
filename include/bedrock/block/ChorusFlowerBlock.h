#pragma once

#include "unmapped/BlockSource.h"
#include "../util/BlockPos.h"
#include <string>
#include "../../unmapped/Block.h"
#include "../actor/Player.h"
#include "BlockLegacy.h"
#include "../util/Random.h"


class ChorusFlowerBlock : BlockLegacy {

public:
    static long DEAD_AGE;
    static long GROW_RATE;
    static long BRANCH_DIRECTIONS;

    virtual void getResourceCount(Random &, Block const&, int)const;
    virtual bool canContainLiquid()const;
    virtual bool isWaterBlocking()const;
    virtual bool canSurvive(BlockSource &, BlockPos const&)const;
//  virtual bool canProvideSupport(Block const&, unsigned char, BlockSupportType)const; //TODO: incomplete function definition
    virtual void tick(BlockSource &, BlockPos const&, Random &)const;
    virtual void neighborChanged(BlockSource &, BlockPos const&, BlockPos const&)const;
    virtual void getVariant(Block const&)const;
    virtual void playerDestroy(Player &, BlockPos const&, Block const&)const;
    virtual void waterSpreadCausesSpawn()const;
    virtual void mayPlace(BlockSource &, BlockPos const&)const;
    ~ChorusFlowerBlock();
    ChorusFlowerBlock(std::string const&, int);
    void _growTreeRecursive(BlockSource &, BlockPos const&, BlockPos const&, Random &, int, int);
    void _allNeighborsEmpty(BlockSource &, BlockPos const&, unsigned char);
    void generatePlant(BlockSource &, BlockPos const&, Random &, int);
    void _placeGrownFlower(BlockSource &, BlockPos const&, int)const;
    void _placeDeadFlower(BlockSource &, BlockPos const&)const;
};
