#pragma once

#include "NetherFortressPiece.h"
#include <vector>


class NBCastleSmallCorridorPiece : NetherFortressPiece {

public:
    ~NBCastleSmallCorridorPiece(); // _ZN26NBCastleSmallCorridorPieceD2Ev
    virtual void getType()const; // _ZNK26NBCastleSmallCorridorPiece7getTypeEv
    virtual void addChildren(StructurePiece *, std::vector<std::unique_ptr<StructurePiece>> &, Random &); // _ZN26NBCastleSmallCorridorPiece11addChildrenEP14StructurePieceRSt6vectorISt10unique_ptrIS0_St14default_deleteIS0_EESaIS6_EER6Random
    virtual void postProcess(BlockSource *, Random &, BoundingBox const&); // _ZN26NBCastleSmallCorridorPiece11postProcessEP11BlockSourceR6RandomRK11BoundingBox
    void createPiece(std::vector<std::unique_ptr<StructurePiece>> &, Random &, int, int, int, int, int); // _ZN26NBCastleSmallCorridorPiece11createPieceERSt6vectorISt10unique_ptrI14StructurePieceSt14default_deleteIS2_EESaIS5_EER6Randomiiiii
    NBCastleSmallCorridorPiece(); // _ZN26NBCastleSmallCorridorPieceC2Ev
    NBCastleSmallCorridorPiece(int, BoundingBox const&, int); // _ZN26NBCastleSmallCorridorPieceC2EiRK11BoundingBoxi
};
