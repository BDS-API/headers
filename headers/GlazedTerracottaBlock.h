#pragma once

class GlazedTerracottaBlock : FaceDirectionalBlock {

public:
    virtual ~GlazedTerracottaBlock();
    virtual bool isValidAuxValue(int)const;
    virtual void getPlacementBlock(Actor &, BlockPos const&, unsigned char, Vec3 const&, int)const;
    virtual void getMapColor(BlockSource &, BlockPos const&)const;

    void GlazedTerracottaBlock(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, int);
};
