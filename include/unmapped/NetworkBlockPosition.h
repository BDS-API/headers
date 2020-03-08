#pragma once

#include "../bedrock/util/BlockPos"


class NetworkBlockPosition {

public:

    NetworkBlockPosition(BlockPos const&);
    NetworkBlockPosition(NetworkBlockPosition const&);
    NetworkBlockPosition(int, int, int);
    NetworkBlockPosition(void);
};
