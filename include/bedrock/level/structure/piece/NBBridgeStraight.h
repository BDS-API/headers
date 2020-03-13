#pragma once

#include "NetherFortressPiece.h"
#include <vector>


class NBBridgeStraight : NetherFortressPiece {

public:
    ~NBBridgeStraight(); // _ZN16NBBridgeStraightD2Ev
    virtual void getType()const; // _ZNK16NBBridgeStraight7getTypeEv
    virtual void addChildren(StructurePiece *, std::vector<std::unique_ptr<StructurePiece>> &, Random &); // _ZN16NBBridgeStraight11addChildrenEP14StructurePieceRSt6vectorISt10unique_ptrIS0_St14default_deleteIS0_EESaIS6_EER6Random
    virtual void postProcess(BlockSource *, Random &, BoundingBox const&); // _ZN16NBBridgeStraight11postProcessEP11BlockSourceR6RandomRK11BoundingBox
    void createPiece(std::vector<std::unique_ptr<StructurePiece>> &, Random &, int, int, int, int, int); // _ZN16NBBridgeStraight11createPieceERSt6vectorISt10unique_ptrI14StructurePieceSt14default_deleteIS2_EESaIS5_EER6Randomiiiii
    NBBridgeStraight(); // _ZN16NBBridgeStraightC2Ev
    NBBridgeStraight(int, BoundingBox const&, int); // _ZN16NBBridgeStraightC2EiRK11BoundingBoxi
};
