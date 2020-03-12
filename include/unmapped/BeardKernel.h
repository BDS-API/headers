#pragma once

#include "../bedrock/level/structure/piece/PoolElementStructurePiece.h"
#include <vector>
#include "../bedrock/util/BlockPos.h"


class BeardKernel {

public:
    void createBeardKernel();
    BeardKernel();
    void getContribution(int, int, int);
    void calculateBeardAndShaverContributions(std::vector<PoolElementStructurePiece> const&, BlockPos const&);
};
