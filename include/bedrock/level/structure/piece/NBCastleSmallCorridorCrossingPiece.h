#pragma once

#include "NetherFortressPiece.h"
#include <vector>


class NBCastleSmallCorridorCrossingPiece : NetherFortressPiece {

public:
    ~NBCastleSmallCorridorCrossingPiece(); // _ZN34NBCastleSmallCorridorCrossingPieceD2Ev
    virtual void getType()const; // _ZNK34NBCastleSmallCorridorCrossingPiece7getTypeEv
    virtual void addChildren(StructurePiece *, std::vector<std::unique_ptr<StructurePiece>> &, Random &); // _ZN34NBCastleSmallCorridorCrossingPiece11addChildrenEP14StructurePieceRSt6vectorISt10unique_ptrIS0_St14default_deleteIS0_EESaIS6_EER6Random
    virtual void postProcess(BlockSource *, Random &, BoundingBox const&); // _ZN34NBCastleSmallCorridorCrossingPiece11postProcessEP11BlockSourceR6RandomRK11BoundingBox
    void createPiece(std::vector<std::unique_ptr<StructurePiece>> &, Random &, int, int, int, int, int); // _ZN34NBCastleSmallCorridorCrossingPiece11createPieceERSt6vectorISt10unique_ptrI14StructurePieceSt14default_deleteIS2_EESaIS5_EER6Randomiiiii
    NBCastleSmallCorridorCrossingPiece(); // _ZN34NBCastleSmallCorridorCrossingPieceC2Ev
    NBCastleSmallCorridorCrossingPiece(int, BoundingBox const&, int); // _ZN34NBCastleSmallCorridorCrossingPieceC2EiRK11BoundingBoxi
};
