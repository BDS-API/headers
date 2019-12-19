#pragma once

class FireBlock : BlockLegacy {

public:
    virtual FireBlock::~FireBlock();
    virtual void tick(BlockSource &, BlockPos const&, Random &)const;
    virtual void getAABB(BlockSource &, BlockPos const&, Block const&, AABB &, bool)const;
    virtual void waterSpreadCausesSpawn(void)const;
    virtual bool canContainLiquid(void)const;
    virtual void onPlace(BlockSource &, BlockPos const&)const;
    virtual void mayPick(void)const;
    virtual void mayPlace(BlockSource &, BlockPos const&)const;
    virtual void neighborChanged(BlockSource &, BlockPos const&, BlockPos const&)const;
    virtual void getResourceCount(Random &, Block const&, int)const;
    virtual void animateTick(BlockSource &, BlockPos const&, Random &)const;
    virtual bool canBeSilkTouched(void)const;

    FireBlock(std::string const&, int);
    void registerFlammableBlocks(void);
    void getTickDelay(void)const;
    bool isValidFireLocation(BlockSource &, BlockPos const&)const;
    bool canBurn(BlockSource &, BlockPos const&);
    void checkBurn(BlockSource &, BlockPos const&, int, Random &, int)const;
    void getFireOdds(BlockSource &, BlockPos const&)const;
    void getFlammability(BlockSource &, BlockPos const&, int)const;
    void _tryEvictBeehive(BlockSource &, BlockPos const&)const;
};
