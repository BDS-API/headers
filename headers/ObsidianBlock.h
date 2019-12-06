#pragma once

class ObsidianBlock : BlockLegacy {

public:
    virtual ~ObsidianBlock();
    virtual void animateTick(BlockSource &, BlockPos const&, Random &)const;

    void ObsidianBlock(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, int, bool);
    void poofParticles(BlockSource &, BlockPos const&)const;
};
