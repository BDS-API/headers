#pragma once

class StructureVoid : BlockLegacy {

public:
    virtual ~StructureVoid();
    virtual void getCollisionShape(AABB &, Block const&, BlockSource &, BlockPos const&, Actor *)const;
    virtual bool isObstructingChests(BlockSource &, BlockPos const&)const;
    virtual void addCollisionShapes(Block const&, BlockSource &, BlockPos const&, AABB const*, std::vector<AABB, std::allocator<AABB>> &, Actor *)const;
    virtual void checkIsPathable(Actor &, BlockPos const&, BlockPos const&)const;
    virtual void entityInside(BlockSource &, BlockPos const&, Actor &)const;
    virtual bool canHaveExtraData(void)const;
    virtual bool canBeSilkTouched(void)const;

    void StructureVoid(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, int);
};
