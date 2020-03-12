#pragma once

#include <string>
#include "FaceDirectionalActorBlock.h"


class JigsawBlock : FaceDirectionalActorBlock {

public:
    virtual void getResourceCount(Random &, Block const&, int)const;
    virtual bool asItemInstance(BlockSource &, BlockPos const&, Block const&)const;
    ~JigsawBlock();
    virtual void getFaceFlip(unsigned char, Block const&)const;
    JigsawBlock(std::string const&, int);
    bool canAttach(JigsawBlockInfo const&, JigsawBlockInfo const&);
};
