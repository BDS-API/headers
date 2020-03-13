#pragma once



class NetworkBlockPosition {

public:
    NetworkBlockPosition(BlockPos const&); // _ZN20NetworkBlockPositionC2ERK8BlockPos
    NetworkBlockPosition(NetworkBlockPosition const&); // _ZN20NetworkBlockPositionC2ERKS_
    NetworkBlockPosition(int, int, int); // _ZN20NetworkBlockPositionC2Eiii
    NetworkBlockPosition(); // _ZN20NetworkBlockPositionC2Ev
};
