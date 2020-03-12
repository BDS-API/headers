#pragma once

#include "../util/AABB.h"
#include "../util/BlockPos.h"
#include "unmapped/BlockSource.h"
#include <string>
#include "../actor/Actor.h"
#include "../../unmapped/Block.h"
#include "../actor/Player.h"
#include "../util/Random.h"
#include "BushBlock.h"


class SweetBerryBushBlock : BushBlock {

public:
    virtual void getVariant(Block const&)const;
    virtual void mayPlace(BlockSource &, BlockPos const&)const;
//  virtual void onFertilized(BlockSource &, BlockPos const&, Actor *, FertilizerType)const; //TODO: incomplete function definition
    virtual bool canSurvive(BlockSource &, BlockPos const&)const;
    virtual void getVisualShape(Block const&, AABB &, bool)const;
    virtual void entityInside(BlockSource &, BlockPos const&, Actor &)const;
    virtual void getRenderLayer()const;
    virtual void getResourceCount(Random &, Block const&, int)const;
    virtual void use(Player &, BlockPos const&)const;
    virtual bool isCropBlock()const;
    virtual bool asItemInstance(BlockSource &, BlockPos const&, Block const&)const;
    virtual void mayPlaceOn(BlockSource &, BlockPos const&)const;
    virtual void attack(Player *, BlockPos const&)const;
    virtual bool dealsContactDamage(Actor const&, Block const&, bool)const;
    virtual void checkIsPathable(Actor &, BlockPos const&, BlockPos const&)const;
    virtual void tick(BlockSource &, BlockPos const&, Random &)const;
    virtual void getAABB(BlockSource &, BlockPos const&, Block const&, AABB &, bool)const;
    virtual bool canContainLiquid()const;
    virtual void spawnResources(BlockSource &, BlockPos const&, Block const&, float, int)const;
    virtual bool canBeSilkTouched()const;
    virtual void executeEvent(BlockSource &, BlockPos const&, Block const&, std::string const&, Actor &)const;
    virtual void getRenderLayer(Block const&, BlockSource &, BlockPos const&)const;
    virtual bool hasTag(BlockSource &, BlockPos const&, Block const&, std::string const&)const;
    virtual bool isInteractiveBlock()const;
    ~SweetBerryBushBlock();
    void _popBerries(BlockSource &, BlockPos const&, int const&)const;
    SweetBerryBushBlock(std::string const&, int);
    void _pickBerries(BlockSource &, BlockPos const&, Block const&)const;
    void _getRenderLayerImpl()const;
    void _growBush(BlockSource &, BlockPos const&)const;
};
