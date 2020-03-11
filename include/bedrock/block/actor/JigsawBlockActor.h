#pragma once

#include "./BlockActor.h"
#include "../../util/BlockPos.h"


class JigsawBlockActor : BlockActor {

public:
    virtual ~JigsawBlockActor();

    JigsawBlockActor(BlockPos const&);
};
