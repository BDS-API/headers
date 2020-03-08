#pragma once

#include "../../unmapped/BlockPos"
#include "../../unmapped/Block"
#include "../../unmapped/BlockSource"
#include "../actor/Actor"
#include "../actor/Player"
#include "../../unmapped/Random"


class BambooBlock : BlockLegacy {

public:
    virtual BambooBlock::~BambooBlock();
    virtual void tick(BlockSource &, BlockPos const&, Random &)const;
    virtual void randomlyModifyPosition(BlockPos const&)const;
    virtual void getAABB(BlockSource &, BlockPos const&, Block const&, AABB &, bool)const;
    virtual bool isWaterBlocking(void)const;
    virtual bool isValidAuxValue(int)const;
    virtual bool canContainLiquid(void)const;
    virtual void onPlace(BlockSource &, BlockPos const&)const;
    virtual void onFertilized(BlockSource &, BlockPos const&, Actor *, FertilizerType)const;
    virtual void mayConsumeFertilizer(BlockSource &)const;
    virtual void mayPlace(BlockSource &, BlockPos const&)const;
    virtual void neighborChanged(BlockSource &, BlockPos const&, BlockPos const&)const;
    virtual void getResourceItem(Random &, Block const&, int)const;
    virtual bool asItemInstance(BlockSource &, BlockPos const&, Block const&)const;
    virtual void getPlacementBlock(Actor &, BlockPos const&, unsigned char, Vec3 const&, int)const;
    virtual void playerDestroy(Player &, BlockPos const&, Block const&)const;
    virtual bool canSurvive(BlockSource &, BlockPos const&)const;
    virtual void getVisualShape(Block const&, AABB &, bool)const;
    virtual bool canBeSilkTouched(void)const;

    BambooBlock(std::string const&, int);
    void _getPositionalValue(BlockPos const&);
    void _checkAlive(BlockSource &, BlockPos const&)const;
    void getMaxHeight(BlockPos const&);
    void _placeBamboo(BlockSource &, BlockPos const&)const;
    void _determineNewBlockState(BlockSource &, BlockPos const&)const;
    void _getStalkThickness(Block const&)const;
    void _getLeafSize(Block const&)const;
};
