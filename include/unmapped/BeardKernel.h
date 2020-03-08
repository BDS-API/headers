#pragma once

#include "../bedrock/util/BlockPos"
#include "../bedrock/level/structure/piece/PoolElementStructurePiece"


class BeardKernel {

public:

    void createBeardKernel();
    BeardKernel(void);
    void getContribution(int, int, int);
    void calculateBeardAndShaverContributions(std::vector<PoolElementStructurePiece, std::allocator<PoolElementStructurePiece>> const&, BlockPos const&);
};
