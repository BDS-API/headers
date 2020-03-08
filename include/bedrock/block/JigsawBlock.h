#pragma once

#include "../../unmapped/BlockSource"
#include "../../unmapped/Random"
#include "../../unmapped/JigsawBlockInfo"


class JigsawBlock : FaceDirectionalActorBlock {

public:
    virtual JigsawBlock::~JigsawBlock();
    virtual void getResourceCount(Random &, Block const&, int)const;
    virtual bool asItemInstance(BlockSource &, BlockPos const&, Block const&)const;
    virtual void getFaceFlip(unsigned char, Block const&)const;

    JigsawBlock(std::string const&, int);
    bool canAttach(JigsawBlockInfo const&, JigsawBlockInfo const&);
};
