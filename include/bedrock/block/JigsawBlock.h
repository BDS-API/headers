#pragma once

#include "../util/Random"
#include "unmapped/BlockSource"
#include "../../unmapped/JigsawBlockInfo"
#include "../../unmapped/Block"
#include "../util/BlockPos"


class JigsawBlock : FaceDirectionalActorBlock {

public:
    virtual JigsawBlock::~JigsawBlock()
    virtual void getResourceCount(Random &, Block const&, int)const;
    virtual bool asItemInstance(BlockSource &, BlockPos const&, Block const&)const;
    virtual void getFaceFlip(unsigned char, Block const&)const;

    JigsawBlock(std::string const&, int);
    bool canAttach(JigsawBlockInfo const&, JigsawBlockInfo const&);
};
