#pragma once

#include "../../unmapped/JigsawBlockInfo"
#include "../util/Random"
#include "../util/BlockPos"
#include "unmapped/BlockSource"
#include "../../unmapped/Block"


class JigsawBlock : FaceDirectionalActorBlock {

public:
    JigsawBlock::~JigsawBlock()
    virtual void getResourceCount(Random &, Block const&, int)const;
    virtual bool asItemInstance(BlockSource &, BlockPos const&, Block const&)const;
    virtual void getFaceFlip(unsigned char, Block const&)const;

    JigsawBlock(std::string const&, int);
    bool canAttach(JigsawBlockInfo const&, JigsawBlockInfo const&);
};
