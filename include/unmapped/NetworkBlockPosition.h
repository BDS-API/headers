#pragma once

#include "./NetworkBlockPosition.h"
#include "../bedrock/util/BlockPos.h"


class NetworkBlockPosition {

public:

    NetworkBlockPosition(BlockPos const&);
    NetworkBlockPosition(NetworkBlockPosition const&);
    NetworkBlockPosition(int, int, int);
    NetworkBlockPosition();
};
