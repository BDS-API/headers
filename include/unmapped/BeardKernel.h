#pragma once

#include "../bedrock/level/structure/piece/PoolElementStructurePiece"
#include "../bedrock/util/BlockPos"


class BeardKernel {

public:

    void createBeardKernel();
    BeardKernel(void);
    void getContribution(int, int, int);
    void calculateBeardAndShaverContributions(std::vector<PoolElementStructurePiece, std::allocator<PoolElementStructurePiece>> const&, BlockPos const&);
};
