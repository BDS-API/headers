#pragma once

class LeafBlock : BlockLegacy {

public:
    virtual ~LeafBlock();
    virtual void tick(BlockSource &, BlockPos const&, Random &)const;
    virtual bool canProvideSupport(Block const&, unsigned char, BlockSupportType)const;
    virtual bool canContainLiquid(void)const;
    virtual void onRemove(BlockSource &, BlockPos const&)const;
    virtual void breaksFallingBlocks(Block const&)const;
    virtual void getResourceCount(Random &, Block const&, int)const;
    virtual void spawnResources(BlockSource &, BlockPos const&, Block const&, float, int)const;
    virtual void getPlacementBlock(Actor &, BlockPos const&, unsigned char, Vec3 const&, int)const;
    virtual void getMapColor(BlockSource &, BlockPos const&)const;
    virtual void getColor(BlockSource &, BlockPos const&, Block const&)const;
    virtual bool isSeasonTinted(Block const&, BlockSource &, BlockPos const&)const;
    virtual void onGraphicsModeChanged(bool, bool, bool);
    virtual void getRenderLayer(Block const&, BlockSource &, BlockPos const&)const;
    virtual void getExtraResourceItem(Block const&)const;

    bool isDeepLeafBlock(BlockSource &, BlockPos const&);
    void shouldStopSnowfall(Block const&);
    void LeafBlock(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, int, WeakPtr<BlockLegacy>);
    void runDecay(BlockSource &, BlockPos const&, int);
    void getSeasonsColor(BlockSource &, BlockPos const&, int, int)const;
    void die(BlockSource &, BlockPos const&)const;
    void getSapling(void)const;
};
