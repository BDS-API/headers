#pragma once

class CropBlock : BushBlock {

public:
    virtual ~CropBlock();
    virtual void tick(BlockSource &, BlockPos const&, Random &)const;
    virtual void getAABB(BlockSource &, BlockPos const&, Block const&, AABB &, bool)const;
    virtual bool isCropBlock(void)const;
    virtual bool canContainLiquid(void)const;
    virtual void onFertilized(BlockSource &, BlockPos const&, Actor *, FertilizerType)const;
    virtual void mayPlaceOn(BlockSource &, BlockPos const&)const;
    virtual void neighborChanged(BlockSource &, BlockPos const&, BlockPos const&)const;
    virtual void asItemInstance(BlockSource &, BlockPos const&, Block const&)const;
    virtual void spawnResources(BlockSource &, BlockPos const&, Block const&, float, int)const;
    virtual bool canSurvive(BlockSource &, BlockPos const&)const;
    virtual void executeEvent(BlockSource &, BlockPos const&, Block const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, Actor &)const;
    virtual bool hasTag(BlockSource &, BlockPos const&, Block const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&)const;
    virtual void getVariant(Block const&)const;
    virtual bool canBeSilkTouched(void)const;
    virtual void getBaseSeed(void)const;
    virtual void getBaseCrop(void)const;
    virtual void getSeedNum(Random &, int, int)const;
    virtual void getCropNum(Random &, int, int)const;

    void CropBlock(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, int);
    void getGrowthSpeed(BlockSource &, BlockPos const&)const;
};
