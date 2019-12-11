#pragma once

class DoublePlantBlock : BushBlock {

public:
    virtual ~DoublePlantBlock();
    virtual void tick(BlockSource &, BlockPos const&, Random &)const;
    virtual void getNextBlockPermutation(Block const&)const;
    virtual void randomlyModifyPosition(BlockPos const&, int &)const;
    virtual void randomlyModifyPosition(BlockPos const&)const;
    virtual void getAABB(BlockSource &, BlockPos const&, Block const&, AABB &, bool)const;
    virtual bool canContainLiquid(void)const;
    virtual void onPlace(BlockSource &, BlockPos const&)const;
    virtual void setupRedstoneComponent(BlockSource &, BlockPos const&)const;
    virtual void onFertilized(BlockSource &, BlockPos const&, Actor *, FertilizerType)const;
    virtual void mayPlace(BlockSource &, BlockPos const&, unsigned char)const;
    virtual void mayPlace(BlockSource &, BlockPos const&)const;
    virtual void playerWillDestroy(Player &, BlockPos const&, Block const&)const;
    virtual void getSecondPart(BlockSource &, BlockPos const&, BlockPos&)const;
    virtual void getResourceCount(Random &, Block const&, int)const;
    virtual void getResourceItem(Random &, Block const&, int)const;
    virtual void asItemInstance(BlockSource &, BlockPos const&, Block const&)const;
    virtual void playerDestroy(Player &, BlockPos const&, Block const&)const;
    virtual bool canSurvive(BlockSource &, BlockPos const&)const;
    virtual bool canBeBuiltOver(BlockSource &, BlockPos const&)const;
    virtual void getRenderLayer(void)const;
    virtual bool isAuxValueRelevantForPicking(void)const;
    virtual void getColor(BlockSource &, BlockPos const&, Block const&)const;
    virtual void getColorForParticle(BlockSource &, BlockPos const&, Block const&)const;
    virtual void getRenderLayer(Block const&, BlockSource &, BlockPos const&)const;
    virtual void getVisualShape(Block const&, AABB &, bool)const;
    virtual void getVariant(Block const&)const;
    virtual bool canBeSilkTouched(void)const;
    virtual void checkAlive(BlockSource &, BlockPos const&)const;

    void DoublePlantBlock(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, int);
    void getType(BlockSource &, BlockPos const&)const;
    void getType(BlockSource &, BlockPos const&, Block const&)const;
    void _isCoveredByTopSnow(BlockSource &, BlockPos const&)const;
    void placeAt(BlockSource &, BlockPos const&, DoublePlantType, int, Actor *)const;
    void popGrassResources(BlockSource &, BlockPos const&, Block const&, Player &)const;
    void popFlowerResources(BlockSource &, BlockPos const&, Block const&, Actor *)const;
    void _getRenderLayerImpl(void)const;
};
