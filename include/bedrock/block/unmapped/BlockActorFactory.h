#pragma once

#include "../BlockLegacy"
#include "../../util/BlockPos"


class BlockActorFactory {

public:

    void createBlockEntity(BlockActorType, BlockPos const&, BlockLegacy const&);
};
