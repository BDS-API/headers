#pragma once

class InvisibleBlock : BlockLegacy {

public:
    virtual ~InvisibleBlock();
    virtual void clip(BlockSource &, BlockPos const&, Vec3 const&, Vec3 const&, bool)const;

    void InvisibleBlock(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, int, Material const&);
};
