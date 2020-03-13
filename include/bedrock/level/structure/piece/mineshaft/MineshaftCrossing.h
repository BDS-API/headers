#pragma once

#include "../MineshaftPiece.h"
#include <vector>


class MineshaftCrossing : MineshaftPiece {

public:
    ~MineshaftCrossing(); // _ZN17MineshaftCrossingD2Ev
    virtual void getType()const; // _ZNK17MineshaftCrossing7getTypeEv
    virtual void addChildren(StructurePiece *, std::vector<std::unique_ptr<StructurePiece>> &, Random &); // _ZN17MineshaftCrossing11addChildrenEP14StructurePieceRSt6vectorISt10unique_ptrIS0_St14default_deleteIS0_EESaIS6_EER6Random
    virtual void postProcess(BlockSource *, Random &, BoundingBox const&); // _ZN17MineshaftCrossing11postProcessEP11BlockSourceR6RandomRK11BoundingBox
    void findCrossing(std::vector<std::unique_ptr<StructurePiece>> &, Random &, int, int, int, int); // _ZN17MineshaftCrossing12findCrossingERSt6vectorISt10unique_ptrI14StructurePieceSt14default_deleteIS2_EESaIS5_EER6Randomiiii
    MineshaftCrossing(MineshaftData &); // _ZN17MineshaftCrossingC2ER13MineshaftData
    MineshaftCrossing(MineshaftData &, int, BoundingBox const&, int); // _ZN17MineshaftCrossingC2ER13MineshaftDataiRK11BoundingBoxi
    void _placeSupportPillar(BlockSource *, BoundingBox const&, int, int, int, int); // _ZN17MineshaftCrossing19_placeSupportPillarEP11BlockSourceRK11BoundingBoxiiii
};
