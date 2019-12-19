#pragma once

class HopperBlock : ActorBlock {

public:
    virtual HopperBlock::~HopperBlock();
    virtual void addAABBs(Block const&, BlockSource &, BlockPos const&, AABB const*, std::vector<AABB, std::allocator<AABB>> &)const;
    virtual void addCollisionShapes(Block const&, BlockSource &, BlockPos const&, AABB const*, std::vector<AABB, std::allocator<AABB>> &, Actor *)const;
    virtual bool canProvideSupport(Block const&, unsigned char, BlockSupportType)const;
    virtual bool isContainerBlock(void)const;
    virtual bool isInteractiveBlock(void)const;
    virtual void onPlace(BlockSource &, BlockPos const&)const;
    virtual void onRemove(BlockSource &, BlockPos const&)const;
    virtual void onRedstoneUpdate(BlockSource &, BlockPos const&, int, bool)const;
    virtual void setupRedstoneComponent(BlockSource &, BlockPos const&)const;
    virtual void getRedstoneProperty(BlockSource &, BlockPos const&)const;
    virtual void getResourceItem(Random &, Block const&, int)const;
    virtual void asItemInstance(BlockSource &, BlockPos const&, Block const&)const;
    virtual void use(Player &, BlockPos const&)const;
    virtual void getPlacementBlock(Actor &, BlockPos const&, unsigned char, Vec3 const&, int)const;
    virtual bool hasComparatorSignal(void)const;
    virtual void getComparatorSignal(BlockSource &, BlockPos const&, Block const&, unsigned char)const;

    void getAttachedOffset(unsigned char);
    void getHopperBlockEntity(BlockSource &, BlockPos const&);
    HopperBlock(std::string const&, int);
    void _installCircuit(BlockSource &, BlockPos const&)const;
};
