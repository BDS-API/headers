#pragma once

#include "../../unmapped/Block"
#include "../../unmapped/BlockSource"
#include "../../unmapped/Random"


class Sapling : BushBlock {

public:
    virtual Sapling::~Sapling();
    virtual void tick(BlockSource &, BlockPos const&, Random &)const;
    virtual bool canContainLiquid(void)const;
    virtual void onFertilized(BlockSource &, BlockPos const&, Actor *, FertilizerType)const;
    virtual void mayPlace(BlockSource &, BlockPos const&)const;
    virtual void getResourceItem(Random &, Block const&, int)const;
    virtual void getRenderLayer(void)const;
    virtual void buildDescriptionId[abi:cxx11](Block const&)const;
    virtual bool isAuxValueRelevantForPicking(void)const;
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
    void _getRenderLayerImpl(void)const;
};
