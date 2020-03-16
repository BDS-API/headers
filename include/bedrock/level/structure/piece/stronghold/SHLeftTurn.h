#pragma once

#include "../StrongholdPiece.h"
#include <vector>


class SHLeftTurn : public StrongholdPiece {

public:
    virtual ~SHLeftTurn(); // _ZN10SHLeftTurnD2Ev
    virtual void __fake_function0(); // fake
    virtual void getType()const; // _ZNK10SHLeftTurn7getTypeEv
    virtual void addChildren(StructurePiece *, std::vector<std::unique_ptr<StructurePiece>> &, Random &); // _ZN10SHLeftTurn11addChildrenEP14StructurePieceRSt6vectorISt10unique_ptrIS0_St14default_deleteIS0_EESaIS6_EER6Random
    virtual void postProcess(BlockSource *, Random &, BoundingBox const&); // _ZN10SHLeftTurn11postProcessEP11BlockSourceR6RandomRK11BoundingBox
    void createPiece(std::vector<std::unique_ptr<StructurePiece>> &, Random &, int, int, int, int, int); // _ZN10SHLeftTurn11createPieceERSt6vectorISt10unique_ptrI14StructurePieceSt14default_deleteIS2_EESaIS5_EER6Randomiiiii
    SHLeftTurn(); // _ZN10SHLeftTurnC2Ev
    SHLeftTurn(int, Random &, BoundingBox const&, int); // _ZN10SHLeftTurnC2EiR6RandomRK11BoundingBoxi
};
