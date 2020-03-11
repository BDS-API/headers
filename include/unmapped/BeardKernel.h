#pragma once

#include "../bedrock/util/BlockPos.h"
#include <memory>
#include "../bedrock/level/structure/piece/PoolElementStructurePiece.h"
#include <vector>


class BeardKernel {

public:

    void createBeardKernel();
    BeardKernel();
    void getContribution(int, int, int);
    void calculateBeardAndShaverContributions(std::vector<PoolElementStructurePiece, std::allocator<PoolElementStructurePiece>> const&, BlockPos const&);
};
