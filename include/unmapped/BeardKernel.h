#pragma once

#include <vector>


class BeardKernel {

public:
    void createBeardKernel(); // _ZN11BeardKernel17createBeardKernelEv
    BeardKernel(); // _ZN11BeardKernelC2Ev
    void getContribution(int, int, int); // _ZN11BeardKernel15getContributionEiii
    void calculateBeardAndShaverContributions(std::vector<PoolElementStructurePiece> const&, BlockPos const&); // _ZN11BeardKernel36calculateBeardAndShaverContributionsERKSt6vectorI25PoolElementStructurePieceSaIS1_EERK8BlockPos
};
