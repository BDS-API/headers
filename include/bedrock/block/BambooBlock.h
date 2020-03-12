#pragma once

#include "../util/AABB.h"
#include "../util/BlockPos.h"
#include "unmapped/BlockSource.h"
#include <string>
#include "../actor/Actor.h"
#include "../util/Vec3.h"
#include "../../unmapped/Block.h"
#include "../actor/Player.h"
#include "BlockLegacy.h"
#include "../util/Random.h"


class BambooBlock : BlockLegacy {

public:
    virtual bool isWaterBlocking()const;
    ~BambooBlock();
    virtual void randomlyModifyPosition(BlockPos const&)const;
    virtual void neighborChanged(BlockSource &, BlockPos const&, BlockPos const&)const;
    virtual bool asItemInstance(BlockSource &, BlockPos const&, Block const&)const;
    virtual bool canContainLiquid()const;
    virtual void onPlace(BlockSource &, BlockPos const&)const;
    virtual void getAABB(BlockSource &, BlockPos const&, Block const&, AABB &, bool)const;
    virtual bool canBeSilkTouched()const;
    virtual void getPlacementBlock(Actor &, BlockPos const&, unsigned char, Vec3 const&, int)const;
    virtual bool isValidAuxValue(int)const;
    virtual void getVisualShape(Block const&, AABB &, bool)const;
    virtual void mayConsumeFertilizer(BlockSource &)const;
    virtual void getResourceItem(Random &, Block const&, int)const;
//  virtual void onFertilized(BlockSource &, BlockPos const&, Actor *, FertilizerType)const; //TODO: incomplete function definition
    virtual void tick(BlockSource &, BlockPos const&, Random &)const;
    virtual bool canSurvive(BlockSource &, BlockPos const&)const;
    virtual void mayPlace(BlockSource &, BlockPos const&)const;
    virtual void playerDestroy(Player &, BlockPos const&, Block const&)const;
    void _placeBamboo(BlockSource &, BlockPos const&)const;
    BambooBlock(std::string const&, int);
    void _getStalkThickness(Block const&)const;
    void _getPositionalValue(BlockPos const&);
    void _getLeafSize(Block const&)const;
    void getMaxHeight(BlockPos const&);
    void _checkAlive(BlockSource &, BlockPos const&)const;
    void _determineNewBlockState(BlockSource &, BlockPos const&)const;
};
