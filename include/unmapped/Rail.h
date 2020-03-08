#pragma once

#include "../bedrock/util/BlockPos"
#include "../bedrock/block/unmapped/BlockSource"


using namespace BaseRailBlock;

class Rail {

public:

    Rail(BlockSource &, BlockPos const&);
    void updateConnections(int);
    void removeSoftConnections();
    void getRail(BlockPos const&);
    bool connectsTo(BaseRailBlock::Rail&);
    bool hasConnection(BlockPos const&);
    bool canConnectTo(BaseRailBlock::Rail&);
    void connectTo(BaseRailBlock::Rail&);
    void place(int, bool);
    bool hasNeighborRail(BlockPos const&);
};
