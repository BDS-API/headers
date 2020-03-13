#pragma once

#include "../MineshaftPiece.h"
#include <vector>


class MineshaftCorridor : MineshaftPiece {

public:
    ~MineshaftCorridor(); // _ZN17MineshaftCorridorD2Ev
    virtual void getType()const; // _ZNK17MineshaftCorridor7getTypeEv
    virtual void addChildren(StructurePiece *, std::vector<std::unique_ptr<StructurePiece>> &, Random &); // _ZN17MineshaftCorridor11addChildrenEP14StructurePieceRSt6vectorISt10unique_ptrIS0_St14default_deleteIS0_EESaIS6_EER6Random
    virtual void postProcess(BlockSource *, Random &, BoundingBox const&); // _ZN17MineshaftCorridor11postProcessEP11BlockSourceR6RandomRK11BoundingBox
    virtual void postProcessMobsAt(BlockSource *, Random &, BoundingBox const&); // _ZN17MineshaftCorridor17postProcessMobsAtEP11BlockSourceR6RandomRK11BoundingBox
    void findCorridorSize(std::vector<std::unique_ptr<StructurePiece>> &, Random &, int, int, int, int); // _ZN17MineshaftCorridor16findCorridorSizeERSt6vectorISt10unique_ptrI14StructurePieceSt14default_deleteIS2_EESaIS5_EER6Randomiiii
    MineshaftCorridor(MineshaftData &); // _ZN17MineshaftCorridorC2ER13MineshaftData
    MineshaftCorridor(MineshaftData &, int, Random &, BoundingBox const&, int); // _ZN17MineshaftCorridorC2ER13MineshaftDataiR6RandomRK11BoundingBoxi
    void _placeCobWeb(BlockSource *, BoundingBox const&, Random &, float, int, int, int); // _ZN17MineshaftCorridor12_placeCobWebEP11BlockSourceRK11BoundingBoxR6Randomfiii
    void _placeSupport(BlockSource *, BoundingBox const&, int, int, int, int, int, Random &); // _ZN17MineshaftCorridor13_placeSupportEP11BlockSourceRK11BoundingBoxiiiiiR6Random
};
