#pragma once

#include <vector>
#include "../StrongholdPiece.h"


class SHRightTurn : StrongholdPiece {

public:
    ~SHRightTurn(); // _ZN11SHRightTurnD2Ev
    virtual void getType()const; // _ZNK11SHRightTurn7getTypeEv
    virtual void addChildren(StructurePiece *, std::vector<std::unique_ptr<StructurePiece>> &, Random &); // _ZN11SHRightTurn11addChildrenEP14StructurePieceRSt6vectorISt10unique_ptrIS0_St14default_deleteIS0_EESaIS6_EER6Random
    virtual void postProcess(BlockSource *, Random &, BoundingBox const&); // _ZN11SHRightTurn11postProcessEP11BlockSourceR6RandomRK11BoundingBox
    void createPiece(std::vector<std::unique_ptr<StructurePiece>> &, Random &, int, int, int, int, int); // _ZN11SHRightTurn11createPieceERSt6vectorISt10unique_ptrI14StructurePieceSt14default_deleteIS2_EESaIS5_EER6Randomiiiii
    SHRightTurn(); // _ZN11SHRightTurnC2Ev
    SHRightTurn(int, Random &, BoundingBox const&, int); // _ZN11SHRightTurnC2EiR6RandomRK11BoundingBoxi
};
