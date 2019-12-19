#pragma once

class EndPortalFrameBlock : BlockLegacy {

public:
    virtual EndPortalFrameBlock::~EndPortalFrameBlock();
    virtual void addAABBs(Block const&, BlockSource &, BlockPos const&, AABB const*, std::vector<AABB, std::allocator<AABB>> &)const;
    virtual void addCollisionShapes(Block const&, BlockSource &, BlockPos const&, AABB const*, std::vector<AABB, std::allocator<AABB>> &, Actor *)const;
    virtual bool isInteractiveBlock(void)const;
    virtual void getResourceCount(Random &, Block const&, int)const;
    virtual void asItemInstance(BlockSource &, BlockPos const&, Block const&)const;
    virtual void use(Player &, BlockPos const&)const;
    virtual void getPlacementBlock(Actor &, BlockPos const&, unsigned char, Vec3 const&, int)const;
    virtual bool hasComparatorSignal(void)const;
    virtual void getComparatorSignal(BlockSource &, BlockPos const&, Block const&, unsigned char)const;
    virtual void getSilkTouchItemInstance(Block const&)const;

    EndPortalFrameBlock(std::string const&, int);
    void tryCreatePortal(BlockSource &, BlockPos const&);
    void createPortal(BlockSource &, BlockPos const&);
};
