#pragma once

class FenceBlock : BlockLegacy {

public:
    virtual FenceBlock::~FenceBlock();
    virtual void getAABB(BlockSource &, BlockPos const&, Block const&, AABB &, bool)const;
    virtual void addCollisionShapes(Block const&, BlockSource &, BlockPos const&, AABB const*, std::vector<AABB, std::allocator<AABB>> &, Actor *)const;
    virtual void getLiquidClipVolume(BlockSource &, BlockPos const&, AABB &)const;
    virtual bool canProvideSupport(Block const&, unsigned char, BlockSupportType)const;
    virtual bool canConnect(Block const&, unsigned char, Block const&)const;
    virtual bool isFenceBlock(void)const;
    virtual bool canContainLiquid(void)const;
    virtual void mayPlace(BlockSource &, BlockPos const&)const;
    virtual void getResourceItem(Random &, Block const&, int)const;
    virtual void use(Player &, BlockPos const&)const;
    virtual void buildDescriptionId[abi:cxx11](Block const&)const;
    virtual bool isAuxValueRelevantForPicking(void)const;
    virtual void getVisualShapeInWorld(Block const&, BlockSource &, BlockPos const&, AABB &, bool)const;
    virtual bool canBeSilkTouched(void)const;

    FenceBlock(std::string const&, int, Material const&);
    void fetchPathableNeighbors(std::vector<BlockPos, std::allocator<BlockPos>> &, BlockSource &, BlockPos const&, Vec3 const&)const;
};
