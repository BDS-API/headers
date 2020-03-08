#pragma once

#include "../actor/Actor"
#include "../util/Random"
#include "../util/BlockPos"
#include "unmapped/BlockSource"
#include "../../unmapped/Block"


class Sapling : BushBlock {

public:
    Sapling::~Sapling()
    virtual void tick(BlockSource &, BlockPos const&, Random &)const;
    virtual bool canContainLiquid()const;
    virtual void onFertilized(BlockSource &, BlockPos const&, Actor *, FertilizerType)const;
    virtual void mayPlace(BlockSource &, BlockPos const&)const;
    virtual void getResourceItem(Random &, Block const&, int)const;
    virtual void getRenderLayer()const;
    virtual void buildDescriptionId(Block const&)const;
    virtual bool isAuxValueRelevantForPicking()const;
    virtual void getRenderLayer(Block const&, BlockSource &, BlockPos const&)const;
    virtual void getVariant(Block const&)const;
    virtual void getSilkTouchItemInstance(Block const&)const;

    Sapling(std::string const&, int);
    void growTree(BlockSource &, BlockPos const&, Random &, Actor *)const;
    void advanceTree(BlockSource &, BlockPos const&, Random &, Actor *)const;
    bool isSapling(BlockSource &, BlockPos const&, SaplingType)const;
    void generateRedwoodTree(int &, int &, bool &, BlockPos const&, BlockSource &, Actor *)const;
    void generateJungleTree(int &, int &, bool &, BlockPos const&, BlockSource &, Actor *)const;
    void generateRoofTree(int &, int &, bool &, BlockPos const&, BlockSource &, Actor *)const;
    void _getRenderLayerImpl()const;
};
