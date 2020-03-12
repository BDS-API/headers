#pragma once

#include <string>
#include "BushBlock.h"


class Sapling : BushBlock {

public:
    virtual void getVariant(Block const&)const;
    virtual void getSilkTouchItemInstance(Block const&)const;
    virtual void mayPlace(BlockSource &, BlockPos const&)const;
    virtual void getRenderLayer()const;
    virtual std::string buildDescriptionId(Block const&)const;
    virtual void getResourceItem(Random &, Block const&, int)const;
    ~Sapling();
    virtual void getRenderLayer(Block const&, BlockSource &, BlockPos const&)const;
    virtual void tick(BlockSource &, BlockPos const&, Random &)const;
    virtual bool isAuxValueRelevantForPicking()const;
    virtual bool canContainLiquid()const;
//  virtual void onFertilized(BlockSource &, BlockPos const&, Actor *, FertilizerType)const; //TODO: incomplete function definition
//  bool isSapling(BlockSource &, BlockPos const&, SaplingType)const; //TODO: incomplete function definition
    void generateRedwoodTree(int &, int &, bool &, BlockPos const&, BlockSource &, Actor *)const;
    void growTree(BlockSource &, BlockPos const&, Random &, Actor *)const;
    void generateRoofTree(int &, int &, bool &, BlockPos const&, BlockSource &, Actor *)const;
    void _getRenderLayerImpl()const;
    void advanceTree(BlockSource &, BlockPos const&, Random &, Actor *)const;
    void generateJungleTree(int &, int &, bool &, BlockPos const&, BlockSource &, Actor *)const;
    Sapling(std::string const&, int);
};
