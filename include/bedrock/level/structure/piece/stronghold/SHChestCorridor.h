#pragma once

#include <vector>
#include "../StrongholdPiece.h"


class SHChestCorridor : StrongholdPiece {

public:
    ~SHChestCorridor(); // _ZN15SHChestCorridorD2Ev
    virtual void getType()const; // _ZNK15SHChestCorridor7getTypeEv
    virtual void addChildren(StructurePiece *, std::vector<std::unique_ptr<StructurePiece>> &, Random &); // _ZN15SHChestCorridor11addChildrenEP14StructurePieceRSt6vectorISt10unique_ptrIS0_St14default_deleteIS0_EESaIS6_EER6Random
    virtual void postProcess(BlockSource *, Random &, BoundingBox const&); // _ZN15SHChestCorridor11postProcessEP11BlockSourceR6RandomRK11BoundingBox
    void createPiece(std::vector<std::unique_ptr<StructurePiece>> &, Random &, int, int, int, int, int); // _ZN15SHChestCorridor11createPieceERSt6vectorISt10unique_ptrI14StructurePieceSt14default_deleteIS2_EESaIS5_EER6Randomiiiii
    SHChestCorridor(); // _ZN15SHChestCorridorC2Ev
    SHChestCorridor(int, Random &, BoundingBox const&, int); // _ZN15SHChestCorridorC2EiR6RandomRK11BoundingBoxi
};
