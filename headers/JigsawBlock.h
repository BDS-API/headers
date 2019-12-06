#pragma once

class JigsawBlock : FaceDirectionalActorBlock {

public:
    virtual ~JigsawBlock();
    virtual void getResourceCount(Random &, Block const&, int)const;
    virtual void asItemInstance(BlockSource &, BlockPos const&, Block const&)const;
    virtual void getFaceFlip(unsigned char, Block const&)const;

    void JigsawBlock(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, int);
    bool canAttach(JigsawBlockInfo const&, JigsawBlockInfo const&);
};
