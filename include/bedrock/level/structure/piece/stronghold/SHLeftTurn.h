#pragma once

#include <vector>
#include "../StrongholdPiece.h"


class SHLeftTurn : StrongholdPiece {

public:
    ~SHLeftTurn(); // _ZN10SHLeftTurnD2Ev
    virtual void getType()const; // _ZNK10SHLeftTurn7getTypeEv
    virtual void addChildren(StructurePiece *, std::vector<std::unique_ptr<StructurePiece>> &, Random &); // _ZN10SHLeftTurn11addChildrenEP14StructurePieceRSt6vectorISt10unique_ptrIS0_St14default_deleteIS0_EESaIS6_EER6Random
    virtual void postProcess(BlockSource *, Random &, BoundingBox const&); // _ZN10SHLeftTurn11postProcessEP11BlockSourceR6RandomRK11BoundingBox
    void createPiece(std::vector<std::unique_ptr<StructurePiece>> &, Random &, int, int, int, int, int); // _ZN10SHLeftTurn11createPieceERSt6vectorISt10unique_ptrI14StructurePieceSt14default_deleteIS2_EESaIS5_EER6Randomiiiii
    SHLeftTurn(); // _ZN10SHLeftTurnC2Ev
    SHLeftTurn(int, Random &, BoundingBox const&, int); // _ZN10SHLeftTurnC2EiR6RandomRK11BoundingBoxi
};
