#pragma once

#include <vector>
#include "../StrongholdPiece.h"


class SHPrisonHall : StrongholdPiece {

public:
    ~SHPrisonHall(); // _ZN12SHPrisonHallD2Ev
    virtual void getType()const; // _ZNK12SHPrisonHall7getTypeEv
    virtual void addChildren(StructurePiece *, std::vector<std::unique_ptr<StructurePiece>> &, Random &); // _ZN12SHPrisonHall11addChildrenEP14StructurePieceRSt6vectorISt10unique_ptrIS0_St14default_deleteIS0_EESaIS6_EER6Random
    virtual void postProcess(BlockSource *, Random &, BoundingBox const&); // _ZN12SHPrisonHall11postProcessEP11BlockSourceR6RandomRK11BoundingBox
    void createPiece(std::vector<std::unique_ptr<StructurePiece>> &, Random &, int, int, int, int, int); // _ZN12SHPrisonHall11createPieceERSt6vectorISt10unique_ptrI14StructurePieceSt14default_deleteIS2_EESaIS5_EER6Randomiiiii
    SHPrisonHall(); // _ZN12SHPrisonHallC2Ev
    SHPrisonHall(int, Random &, BoundingBox const&, int); // _ZN12SHPrisonHallC2EiR6RandomRK11BoundingBoxi
};
