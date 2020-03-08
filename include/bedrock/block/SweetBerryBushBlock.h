#pragma once

#include "../../unmapped/Block"
#include "../../unmapped/BlockSource"
#include "../actor/Actor"
#include "../actor/Player"
#include "../../unmapped/Random"


class SweetBerryBushBlock : BushBlock {

public:
    virtual SweetBerryBushBlock::~SweetBerryBushBlock();
    virtual void tick(BlockSource &, BlockPos const&, Random &)const;
    virtual void getAABB(BlockSource &, BlockPos const&, Block const&, AABB &, bool)const;
    virtual bool isCropBlock(void)const;
    virtual bool isInteractiveBlock(void)const;
    virtual bool canContainLiquid(void)const;
    virtual void checkIsPathable(Actor &, BlockPos const&, BlockPos const&)const;
    virtual void onFertilized(BlockSource &, BlockPos const&, Actor *, FertilizerType)const;
    virtual void mayPlace(BlockSource &, BlockPos const&)const;
    virtual void mayPlaceOn(BlockSource &, BlockPos const&)const;
    virtual void getResourceCount(Random &, Block const&, int)const;
    virtual bool asItemInstance(BlockSource &, BlockPos const&, Block const&)const;
    virtual void spawnResources(BlockSource &, BlockPos const&, Block const&, float, int)const;
    virtual void use(Player &, BlockPos const&)const;
    virtual void attack(Player *, BlockPos const&)const;
    virtual void entityInside(BlockSource &, BlockPos const&, Actor &)const;
    virtual bool canSurvive(BlockSource &, BlockPos const&)const;
    virtual void executeEvent(BlockSource &, BlockPos const&, Block const&, std::string const&, Actor &)const;
    virtual bool hasTag(BlockSource &, BlockPos const&, Block const&, std::string const&)const;
    virtual void getRenderLayer(void)const;
    virtual void getRenderLayer(Block const&, BlockSource &, BlockPos const&)const;
    virtual void getVisualShape(Block const&, AABB &, bool)const;
    virtual void getVariant(Block const&)const;
    virtual bool canBeSilkTouched(void)const;
    virtual bool dealsContactDamage(Actor const&, Block const&, bool)const;

    SweetBerryBushBlock(std::string const&, int);
    void _growBush(BlockSource &, BlockPos const&)const;
    void _pickBerries(BlockSource &, BlockPos const&, Block const&)const;
    void _getRenderLayerImpl(void)const;
    void _popBerries(BlockSource &, BlockPos const&, int const&)const;
};
