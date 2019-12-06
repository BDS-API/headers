#pragma once

class NetworkBlockPosition {

public:

    void NetworkBlockPosition(BlockPos const&);
    void NetworkBlockPosition(NetworkBlockPosition const&);
    void NetworkBlockPosition(int, int, int);
    void NetworkBlockPosition(void);
};
