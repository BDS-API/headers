#pragma once

#include "unmapped/BlockSource.h"
#include <string>
#include "./FaceDirectionalActorBlock.h"
#include "../util/BlockPos.h"
#include "../../unmapped/JigsawBlockInfo.h"
#include "../util/Random.h"
#include "../../unmapped/Block.h"


class JigsawBlock : FaceDirectionalActorBlock {

public:
    virtual ~JigsawBlock();
    virtual void getResourceCount(Random &, Block const&, int)const;
    virtual bool asItemInstance(BlockSource &, BlockPos const&, Block const&)const;
    virtual void getFaceFlip(unsigned char, Block const&)const;

    JigsawBlock(std::string const&, int);
    bool canAttach(JigsawBlockInfo const&, JigsawBlockInfo const&);
};
