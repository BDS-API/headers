#pragma once

#include "../../../unmapped/BlockPos"


class JigsawBlockActor : BlockActor {

public:
    virtual JigsawBlockActor::~JigsawBlockActor();

    JigsawBlockActor(BlockPos const&);
};
