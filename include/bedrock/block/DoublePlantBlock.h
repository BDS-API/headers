#pragma once

#include "../util/Random"
#include "unmapped/BlockSource"
#include "../actor/Actor"
#include "../../unmapped/Block"
#include "../util/BlockPos"
#include "../actor/Player"
#include "../util/AABB"


class DoublePlantBlock : BushBlock {

public:
    virtual DoublePlantBlock::~DoublePlantBlock()
    virtual void tick(BlockSource &, BlockPos const&, Random &)const;
    virtual void getNextBlockPermutation(Block const&)const;
    virtual void randomlyModifyPosition(BlockPos const&, int &)const;
    virtual void randomlyModifyPosition(BlockPos const&)const;
    virtual void getAABB(BlockSource &, BlockPos const&, Block const&, AABB &, bool)const;
    virtual bool canContainLiquid()const;
    virtual void onPlace(BlockSource &, BlockPos const&)const;
    virtual void setupRedstoneComponent(BlockSource &, BlockPos const&)const;
    virtual void onFertilized(BlockSource &, BlockPos const&, Actor *, FertilizerType)const;
    virtual void mayPlace(BlockSource &, BlockPos const&, unsigned char)const;
    virtual void mayPlace(BlockSource &, BlockPos const&)const;
    virtual void playerWillDestroy(Player &, BlockPos const&, Block const&)const;
    virtual void getSecondPart(BlockSource &, BlockPos const&, BlockPos&)const;
    virtual void getResourceCount(Random &, Block const&, int)const;
    virtual void getResourceItem(Random &, Block const&, int)const;
    virtual bool asItemInstance(BlockSource &, BlockPos const&, Block const&)const;
    virtual void playerDestroy(Player &, BlockPos const&, Block const&)const;
    virtual bool canSurvive(BlockSource &, BlockPos const&)const;
    virtual bool canBeBuiltOver(BlockSource &, BlockPos const&)const;
    virtual void getRenderLayer()const;
    virtual void buildDescriptionId(Block const&)const;
    virtual bool isAuxValueRelevantForPicking()const;
    virtual void getColor(BlockSource &, BlockPos const&, Block const&)const;
    virtual void getColorForParticle(BlockSource &, BlockPos const&, Block const&)const;
    virtual void getRenderLayer(Block const&, BlockSource &, BlockPos const&)const;
    virtual void getVisualShape(Block const&, AABB &, bool)const;
    virtual void getVariant(Block const&)const;
    virtual bool canBeSilkTouched()const;
    virtual void checkAlive(BlockSource &, BlockPos const&)const;

    DoublePlantBlock(std::string const&, int);
    void getType(BlockSource &, BlockPos const&)const;
    void getType(BlockSource &, BlockPos const&, Block const&)const;
    void _isCoveredByTopSnow(BlockSource &, BlockPos const&)const;
    void placeAt(BlockSource &, BlockPos const&, DoublePlantType, int, Actor *)const;
    void popGrassResources(BlockSource &, BlockPos const&, Block const&, Player &)const;
    void popFlowerResources(BlockSource &, BlockPos const&, Block const&, Actor *)const;
    void _getRenderLayerImpl()const;
};
