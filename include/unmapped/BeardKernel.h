#pragma once

#include <vector>


class BeardKernel {

public:
    BeardKernel();
    void getContribution(int, int, int);
    void calculateBeardAndShaverContributions(std::vector<PoolElementStructurePiece> const&, BlockPos const&);
    void createBeardKernel();
};
