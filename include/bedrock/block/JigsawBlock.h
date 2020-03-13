#pragma once

#include <string>
#include "FaceDirectionalActorBlock.h"


class JigsawBlock : FaceDirectionalActorBlock {

public:
    ~JigsawBlock(); // _ZN11JigsawBlockD2Ev
    virtual void getResourceCount(Random &, Block const&, int)const; // _ZNK11JigsawBlock16getResourceCountER6RandomRK5Blocki
    virtual bool asItemInstance(BlockSource &, BlockPos const&, Block const&)const; // _ZNK11JigsawBlock14asItemInstanceER11BlockSourceRK8BlockPosRK5Block
    virtual void getFaceFlip(unsigned char, Block const&)const; // _ZNK11JigsawBlock11getFaceFlipEhRK5Block
    JigsawBlock(std::string const&, int); // _ZN11JigsawBlockC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEi
    bool canAttach(JigsawBlockInfo const&, JigsawBlockInfo const&); // _ZN11JigsawBlock9canAttachERK15JigsawBlockInfoS2_
};
