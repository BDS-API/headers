#pragma once

#include "../../../unmapped/BlockPos"


class EndPortalBlockActor : BlockActor {

public:
    virtual EndPortalBlockActor::~EndPortalBlockActor();

    EndPortalBlockActor(BlockPos const&);
};
