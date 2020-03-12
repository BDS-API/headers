#pragma once

#include <string>
#include "BlockLegacy.h"


class BambooBlock : BlockLegacy {

public:
//  virtual void onFertilized(BlockSource &, BlockPos const&, Actor *, FertilizerType)const; //TODO: incomplete function definition
    ~BambooBlock();
    virtual bool canContainLiquid()const;
    virtual void mayConsumeFertilizer(BlockSource &)const;
    virtual void neighborChanged(BlockSource &, BlockPos const&, BlockPos const&)const;
    virtual void getPlacementBlock(Actor &, BlockPos const&, unsigned char, Vec3 const&, int)const;
    virtual bool asItemInstance(BlockSource &, BlockPos const&, Block const&)const;
    virtual void getResourceItem(Random &, Block const&, int)const;
    virtual bool isWaterBlocking()const;
    virtual bool canBeSilkTouched()const;
    virtual bool canSurvive(BlockSource &, BlockPos const&)const;
    virtual void mayPlace(BlockSource &, BlockPos const&)const;
    virtual void getVisualShape(Block const&, AABB &, bool)const;
    virtual void randomlyModifyPosition(BlockPos const&)const;
    virtual bool isValidAuxValue(int)const;
    virtual void playerDestroy(Player &, BlockPos const&, Block const&)const;
    virtual void tick(BlockSource &, BlockPos const&, Random &)const;
    virtual void getAABB(BlockSource &, BlockPos const&, Block const&, AABB &, bool)const;
    virtual void onPlace(BlockSource &, BlockPos const&)const;
    void _getLeafSize(Block const&)const;
    BambooBlock(std::string const&, int);
    void _getPositionalValue(BlockPos const&);
    void _getStalkThickness(Block const&)const;
    void getMaxHeight(BlockPos const&);
    void _placeBamboo(BlockSource &, BlockPos const&)const;
    void _checkAlive(BlockSource &, BlockPos const&)const;
    void _determineNewBlockState(BlockSource &, BlockPos const&)const;
};
