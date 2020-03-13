#pragma once

#include <vector>
#include "../StrongholdPiece.h"


class SHStraight : StrongholdPiece {

public:
    ~SHStraight(); // _ZN10SHStraightD2Ev
    virtual void getType()const; // _ZNK10SHStraight7getTypeEv
    virtual void addChildren(StructurePiece *, std::vector<std::unique_ptr<StructurePiece>> &, Random &); // _ZN10SHStraight11addChildrenEP14StructurePieceRSt6vectorISt10unique_ptrIS0_St14default_deleteIS0_EESaIS6_EER6Random
    virtual void postProcess(BlockSource *, Random &, BoundingBox const&); // _ZN10SHStraight11postProcessEP11BlockSourceR6RandomRK11BoundingBox
    void createPiece(std::vector<std::unique_ptr<StructurePiece>> &, Random &, int, int, int, int, int); // _ZN10SHStraight11createPieceERSt6vectorISt10unique_ptrI14StructurePieceSt14default_deleteIS2_EESaIS5_EER6Randomiiiii
    SHStraight(); // _ZN10SHStraightC2Ev
    SHStraight(int, Random &, BoundingBox const&, int); // _ZN10SHStraightC2EiR6RandomRK11BoundingBoxi
};
