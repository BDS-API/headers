#pragma once

#include "../../unmapped/JigsawBlockInfo.h"
#include "unmapped/BlockSource.h"
#include "../util/BlockPos.h"
#include <string>
#include "FaceDirectionalActorBlock.h"
#include "../../unmapped/Block.h"
#include "../util/Random.h"


class JigsawBlock : FaceDirectionalActorBlock {

public:
    virtual void getFaceFlip(unsigned char, Block const&)const;
    virtual void getResourceCount(Random &, Block const&, int)const;
    virtual bool asItemInstance(BlockSource &, BlockPos const&, Block const&)const;
    ~JigsawBlock();
    JigsawBlock(std::string const&, int);
    bool canAttach(JigsawBlockInfo const&, JigsawBlockInfo const&);
};
