#pragma once

#include <vector>
#include "../StrongholdPiece.h"


class SHFiveCrossing : StrongholdPiece {

public:
    ~SHFiveCrossing(); // _ZN14SHFiveCrossingD2Ev
    virtual void getType()const; // _ZNK14SHFiveCrossing7getTypeEv
    virtual void addChildren(StructurePiece *, std::vector<std::unique_ptr<StructurePiece>> &, Random &); // _ZN14SHFiveCrossing11addChildrenEP14StructurePieceRSt6vectorISt10unique_ptrIS0_St14default_deleteIS0_EESaIS6_EER6Random
    virtual void postProcess(BlockSource *, Random &, BoundingBox const&); // _ZN14SHFiveCrossing11postProcessEP11BlockSourceR6RandomRK11BoundingBox
    void createPiece(std::vector<std::unique_ptr<StructurePiece>> &, Random &, int, int, int, int, int); // _ZN14SHFiveCrossing11createPieceERSt6vectorISt10unique_ptrI14StructurePieceSt14default_deleteIS2_EESaIS5_EER6Randomiiiii
    SHFiveCrossing(); // _ZN14SHFiveCrossingC2Ev
    SHFiveCrossing(int, Random &, BoundingBox const&, int); // _ZN14SHFiveCrossingC2EiR6RandomRK11BoundingBoxi
};
