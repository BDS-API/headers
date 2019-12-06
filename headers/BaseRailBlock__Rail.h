#pragma once

class BaseRailBlock::Rail {

public:

    void Rail(BlockSource &, BlockPos const&);
    void updateConnections(int);
    void removeSoftConnections(void);
    void getRail(BlockPos const&);
    void connectsTo(BaseRailBlock::Rail&);
    bool hasConnection(BlockPos const&);
    bool canConnectTo(BaseRailBlock::Rail&);
    void connectTo(BaseRailBlock::Rail&);
    void place(int, bool);
    bool hasNeighborRail(BlockPos const&);
};
