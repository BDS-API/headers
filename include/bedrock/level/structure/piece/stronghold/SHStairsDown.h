#pragma once

#include <vector>
#include "../StrongholdPiece.h"


class SHStairsDown : StrongholdPiece {

public:
    ~SHStairsDown(); // _ZN12SHStairsDownD2Ev
    virtual void getType()const; // _ZNK12SHStairsDown7getTypeEv
    virtual void addChildren(StructurePiece *, std::vector<std::unique_ptr<StructurePiece>> &, Random &); // _ZN12SHStairsDown11addChildrenEP14StructurePieceRSt6vectorISt10unique_ptrIS0_St14default_deleteIS0_EESaIS6_EER6Random
    virtual void postProcess(BlockSource *, Random &, BoundingBox const&); // _ZN12SHStairsDown11postProcessEP11BlockSourceR6RandomRK11BoundingBox
    void createPiece(std::vector<std::unique_ptr<StructurePiece>> &, Random &, int, int, int, int, int); // _ZN12SHStairsDown11createPieceERSt6vectorISt10unique_ptrI14StructurePieceSt14default_deleteIS2_EESaIS5_EER6Randomiiiii
    SHStairsDown(); // _ZN12SHStairsDownC2Ev
    SHStairsDown(int, Random &, BoundingBox const&, int); // _ZN12SHStairsDownC2EiR6RandomRK11BoundingBoxi
    SHStairsDown(int, Random &, int, int); // _ZN12SHStairsDownC2EiR6Randomii
};
