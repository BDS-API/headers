#pragma once

#include <vector>
#include "../StrongholdPiece.h"


class SHStraightStairsDown : StrongholdPiece {

public:
    ~SHStraightStairsDown(); // _ZN20SHStraightStairsDownD2Ev
    virtual void getType()const; // _ZNK20SHStraightStairsDown7getTypeEv
    virtual void addChildren(StructurePiece *, std::vector<std::unique_ptr<StructurePiece>> &, Random &); // _ZN20SHStraightStairsDown11addChildrenEP14StructurePieceRSt6vectorISt10unique_ptrIS0_St14default_deleteIS0_EESaIS6_EER6Random
    virtual void postProcess(BlockSource *, Random &, BoundingBox const&); // _ZN20SHStraightStairsDown11postProcessEP11BlockSourceR6RandomRK11BoundingBox
    void createPiece(std::vector<std::unique_ptr<StructurePiece>> &, Random &, int, int, int, int, int); // _ZN20SHStraightStairsDown11createPieceERSt6vectorISt10unique_ptrI14StructurePieceSt14default_deleteIS2_EESaIS5_EER6Randomiiiii
    SHStraightStairsDown(); // _ZN20SHStraightStairsDownC2Ev
    SHStraightStairsDown(int, Random &, BoundingBox const&, int); // _ZN20SHStraightStairsDownC2EiR6RandomRK11BoundingBoxi
};
