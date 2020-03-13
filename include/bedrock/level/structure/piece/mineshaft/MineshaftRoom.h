#pragma once

#include "../MineshaftPiece.h"
#include <vector>


class MineshaftRoom : MineshaftPiece {

public:
    ~MineshaftRoom(); // _ZN13MineshaftRoomD2Ev
    virtual void moveBoundingBox(int, int, int); // _ZN13MineshaftRoom15moveBoundingBoxEiii
    virtual void getType()const; // _ZNK13MineshaftRoom7getTypeEv
    virtual void addChildren(StructurePiece *, std::vector<std::unique_ptr<StructurePiece>> &, Random &); // _ZN13MineshaftRoom11addChildrenEP14StructurePieceRSt6vectorISt10unique_ptrIS0_St14default_deleteIS0_EESaIS6_EER6Random
    virtual void postProcess(BlockSource *, Random &, BoundingBox const&); // _ZN13MineshaftRoom11postProcessEP11BlockSourceR6RandomRK11BoundingBox
    MineshaftRoom(MineshaftData &); // _ZN13MineshaftRoomC2ER13MineshaftData
    MineshaftRoom(MineshaftData &, int, Random &, int, int); // _ZN13MineshaftRoomC2ER13MineshaftDataiR6Randomii
};
