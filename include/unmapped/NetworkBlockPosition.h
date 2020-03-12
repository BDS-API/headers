#pragma once

#include "../bedrock/util/BlockPos.h"


class NetworkBlockPosition {

public:
    NetworkBlockPosition(NetworkBlockPosition const&);
    NetworkBlockPosition();
    NetworkBlockPosition(BlockPos const&);
    NetworkBlockPosition(int, int, int);
};
