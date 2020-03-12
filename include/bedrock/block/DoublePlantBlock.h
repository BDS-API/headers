#pragma once

#include <string>
#include "BushBlock.h"


class DoublePlantBlock : BushBlock {

public:
//  virtual void onFertilized(BlockSource &, BlockPos const&, Actor *, FertilizerType)const; //TODO: incomplete function definition
    virtual void getResourceItem(Random &, Block const&, int)const;
    ~DoublePlantBlock();
    virtual void getRenderLayer(Block const&, BlockSource &, BlockPos const&)const;
    virtual void getResourceCount(Random &, Block const&, int)const;
    virtual bool isAuxValueRelevantForPicking()const;
    virtual void setupRedstoneComponent(BlockSource &, BlockPos const&)const;
    virtual bool canBeBuiltOver(BlockSource &, BlockPos const&)const;
    virtual void randomlyModifyPosition(BlockPos const&)const;
    virtual void playerWillDestroy(Player &, BlockPos const&, Block const&)const;
    virtual void mayPlace(BlockSource &, BlockPos const&)const;
    virtual void getAABB(BlockSource &, BlockPos const&, Block const&, AABB &, bool)const;
    virtual void mayPlace(BlockSource &, BlockPos const&, unsigned char)const;
    virtual void randomlyModifyPosition(BlockPos const&, int &)const;
    virtual bool canBeSilkTouched()const;
    virtual void onPlace(BlockSource &, BlockPos const&)const;
    virtual void tick(BlockSource &, BlockPos const&, Random &)const;
    virtual bool asItemInstance(BlockSource &, BlockPos const&, Block const&)const;
    virtual void getVisualShape(Block const&, AABB &, bool)const;
    virtual void getSecondPart(BlockSource &, BlockPos const&, BlockPos &)const;
    virtual void getNextBlockPermutation(Block const&)const;
    virtual void getRenderLayer()const;
    virtual void getVariant(Block const&)const;
    virtual bool canContainLiquid()const;
    virtual std::string buildDescriptionId(Block const&)const;
    virtual void getColor(BlockSource &, BlockPos const&, Block const&)const;
    virtual void getColorForParticle(BlockSource &, BlockPos const&, Block const&)const;
    virtual void checkAlive(BlockSource &, BlockPos const&)const;
    virtual void playerDestroy(Player &, BlockPos const&, Block const&)const;
    virtual bool canSurvive(BlockSource &, BlockPos const&)const;
    void popFlowerResources(BlockSource &, BlockPos const&, Block const&, Actor *)const;
    DoublePlantBlock(std::string const&, int);
    void popGrassResources(BlockSource &, BlockPos const&, Block const&, Player &)const;
    void _getRenderLayerImpl()const;
    void _isCoveredByTopSnow(BlockSource &, BlockPos const&)const;
//  void placeAt(BlockSource &, BlockPos const&, DoublePlantType, int, Actor *)const; //TODO: incomplete function definition
    void getType(BlockSource &, BlockPos const&)const;
    void getType(BlockSource &, BlockPos const&, Block const&)const;
};
