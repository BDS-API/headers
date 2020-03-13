#pragma once

#include "../MineshaftPiece.h"
#include <vector>


class MineshaftStairs : MineshaftPiece {

public:
    ~MineshaftStairs(); // _ZN15MineshaftStairsD2Ev
    virtual void getType()const; // _ZNK15MineshaftStairs7getTypeEv
    virtual void addChildren(StructurePiece *, std::vector<std::unique_ptr<StructurePiece>> &, Random &); // _ZN15MineshaftStairs11addChildrenEP14StructurePieceRSt6vectorISt10unique_ptrIS0_St14default_deleteIS0_EESaIS6_EER6Random
    virtual void postProcess(BlockSource *, Random &, BoundingBox const&); // _ZN15MineshaftStairs11postProcessEP11BlockSourceR6RandomRK11BoundingBox
    void findStairs(std::vector<std::unique_ptr<StructurePiece>> &, Random &, int, int, int, int); // _ZN15MineshaftStairs10findStairsERSt6vectorISt10unique_ptrI14StructurePieceSt14default_deleteIS2_EESaIS5_EER6Randomiiii
    MineshaftStairs(MineshaftData &); // _ZN15MineshaftStairsC2ER13MineshaftData
    MineshaftStairs(MineshaftData &, int, BoundingBox const&, int); // _ZN15MineshaftStairsC2ER13MineshaftDataiRK11BoundingBoxi
};
