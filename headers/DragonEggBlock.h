#pragma once

class DragonEggBlock : HeavyBlock {

public:
    virtual ~DragonEggBlock();
    virtual void breaksFallingBlocks(Block const&)const;
    virtual void use(Player &, BlockPos const&)const;
    virtual void attack(Player *, BlockPos const&)const;
    virtual void getDustColor(Block const&)const;

    void DragonEggBlock(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, int);
    void _teleport(BlockSource &, Random &, BlockPos const&)const;
};
