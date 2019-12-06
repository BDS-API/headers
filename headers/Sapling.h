#pragma once

class Sapling : BushBlock {

public:
    virtual ~Sapling();
    virtual void tick(BlockSource &, BlockPos const&, Random &)const;
    virtual bool canContainLiquid(void)const;
    virtual void onFertilized(BlockSource &, BlockPos const&, Actor *, FertilizerType)const;
    virtual void mayPlace(BlockSource &, BlockPos const&)const;
    virtual void getResourceItem(Random &, Block const&, int)const;
    virtual void getRenderLayer(void)const;
    virtual bool isAuxValueRelevantForPicking(void)const;
    virtual void getRenderLayer(Block const&, BlockSource &, BlockPos const&)const;
    virtual void getVariant(Block const&)const;
    virtual void getSilkTouchItemInstance(Block const&)const;

    void Sapling(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, int);
    void growTree(BlockSource &, BlockPos const&, Random &, Actor *)const;
    void advanceTree(BlockSource &, BlockPos const&, Random &, Actor *)const;
    bool isSapling(BlockSource &, BlockPos const&, SaplingType)const;
    void generateRedwoodTree(int &, int &, bool &, BlockPos const&, BlockSource &, Actor *)const;
    void generateJungleTree(int &, int &, bool &, BlockPos const&, BlockSource &, Actor *)const;
    void generateRoofTree(int &, int &, bool &, BlockPos const&, BlockSource &, Actor *)const;
    void _getRenderLayerImpl(void)const;
};
