#pragma once

#include "unmapped/BlockSource.h"
#include "../util/BlockPos.h"
#include <string>
#include "../actor/Actor.h"
#include "../../unmapped/Block.h"
#include "../util/Random.h"
#include "BushBlock.h"


class Sapling : BushBlock {

public:
    virtual void getRenderLayer()const;
    virtual void getResourceItem(Random &, Block const&, int)const;
    virtual void mayPlace(BlockSource &, BlockPos const&)const;
    ~Sapling();
    virtual void getSilkTouchItemInstance(Block const&)const;
//  virtual void onFertilized(BlockSource &, BlockPos const&, Actor *, FertilizerType)const; //TODO: incomplete function definition
    virtual bool canContainLiquid()const;
    virtual std::string buildDescriptionId(Block const&)const;
    virtual void getRenderLayer(Block const&, BlockSource &, BlockPos const&)const;
    virtual void getVariant(Block const&)const;
    virtual bool isAuxValueRelevantForPicking()const;
    virtual void tick(BlockSource &, BlockPos const&, Random &)const;
    Sapling(std::string const&, int);
    void generateRedwoodTree(int &, int &, bool &, BlockPos const&, BlockSource &, Actor *)const;
    void advanceTree(BlockSource &, BlockPos const&, Random &, Actor *)const;
    void _getRenderLayerImpl()const;
    void generateRoofTree(int &, int &, bool &, BlockPos const&, BlockSource &, Actor *)const;
//  bool isSapling(BlockSource &, BlockPos const&, SaplingType)const; //TODO: incomplete function definition
    void generateJungleTree(int &, int &, bool &, BlockPos const&, BlockSource &, Actor *)const;
    void growTree(BlockSource &, BlockPos const&, Random &, Actor *)const;
};
