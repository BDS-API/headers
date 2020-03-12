#pragma once

#include "../../util/BlockPos.h"
#include "BlockActor.h"


class EndPortalBlockActor : BlockActor {

public:
    ~EndPortalBlockActor();
    EndPortalBlockActor(BlockPos const&);
};
