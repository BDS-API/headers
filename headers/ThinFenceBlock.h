#pragma once

class ThinFenceBlock : BlockLegacy {

public:
    virtual ~ThinFenceBlock();
    virtual void addAABBs(Block const&, BlockSource &, BlockPos const&, AABB const*, std::vector<AABB, std::allocator<AABB>> &)const;
    virtual void getAABB(BlockSource &, BlockPos const&, Block const&, AABB &, bool)const;
    virtual void addCollisionShapes(Block const&, BlockSource &, BlockPos const&, AABB const*, std::vector<AABB, std::allocator<AABB>> &, Actor *)const;
    virtual void getLiquidClipVolume(BlockSource &, BlockPos const&, AABB &)const;
    virtual bool canConnect(Block const&, unsigned char, Block const&)const;
    virtual bool isThinFenceBlock(void)const;
    virtual bool canContainLiquid(void)const;
    virtual bool canBeUsedInCommands(bool, BaseGameVersion const&)const;
    virtual void getResourceCount(Random &, Block const&, int)const;
    virtual void getVisualShapeInWorld(Block const&, BlockSource &, BlockPos const&, AABB &, bool)const;

    void ThinFenceBlock(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, int, Material const&, bool, bool, bool);
};
