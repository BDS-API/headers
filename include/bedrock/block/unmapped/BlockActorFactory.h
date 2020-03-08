#pragma once

#include "../../util/BlockPos"
#include "../BlockLegacy"


class BlockActorFactory {

public:

    void createBlockEntity(BlockActorType, BlockPos const&, BlockLegacy const&);
};
