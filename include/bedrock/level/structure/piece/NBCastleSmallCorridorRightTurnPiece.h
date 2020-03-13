#pragma once

#include "NetherFortressPiece.h"
#include <vector>


class NBCastleSmallCorridorRightTurnPiece : NetherFortressPiece {

public:
    ~NBCastleSmallCorridorRightTurnPiece(); // _ZN35NBCastleSmallCorridorRightTurnPieceD2Ev
    virtual void getType()const; // _ZNK35NBCastleSmallCorridorRightTurnPiece7getTypeEv
    virtual void addChildren(StructurePiece *, std::vector<std::unique_ptr<StructurePiece>> &, Random &); // _ZN35NBCastleSmallCorridorRightTurnPiece11addChildrenEP14StructurePieceRSt6vectorISt10unique_ptrIS0_St14default_deleteIS0_EESaIS6_EER6Random
    virtual void postProcess(BlockSource *, Random &, BoundingBox const&); // _ZN35NBCastleSmallCorridorRightTurnPiece11postProcessEP11BlockSourceR6RandomRK11BoundingBox
    void createPiece(std::vector<std::unique_ptr<StructurePiece>> &, Random &, int, int, int, int, int); // _ZN35NBCastleSmallCorridorRightTurnPiece11createPieceERSt6vectorISt10unique_ptrI14StructurePieceSt14default_deleteIS2_EESaIS5_EER6Randomiiiii
    NBCastleSmallCorridorRightTurnPiece(); // _ZN35NBCastleSmallCorridorRightTurnPieceC2Ev
    NBCastleSmallCorridorRightTurnPiece(int, Random &, BoundingBox const&, int); // _ZN35NBCastleSmallCorridorRightTurnPieceC2EiR6RandomRK11BoundingBoxi
};
