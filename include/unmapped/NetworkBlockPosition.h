#pragma once



class NetworkBlockPosition {

public:
    NetworkBlockPosition();
    NetworkBlockPosition(BlockPos const&);
    NetworkBlockPosition(NetworkBlockPosition const&);
    NetworkBlockPosition(int, int, int);
};
