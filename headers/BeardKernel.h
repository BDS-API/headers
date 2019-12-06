#pragma once

class BeardKernel {

public:

    void createBeardKernel(void);
    void BeardKernel(void);
    void getContribution(int, int, int);
    void calculateBeardAndShaverContributions(std::vector<PoolElementStructurePiece, std::allocator<PoolElementStructurePiece>> const&, BlockPos const&);
};
