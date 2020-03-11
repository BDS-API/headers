#pragma once

#include "./BlockActor.h"
#include "../../util/BlockPos.h"


class EndPortalBlockActor : BlockActor {

public:
    virtual ~EndPortalBlockActor();

    EndPortalBlockActor(BlockPos const&);
};
