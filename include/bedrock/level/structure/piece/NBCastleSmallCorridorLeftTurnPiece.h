#pragma once

#include <vector>
#include "NetherFortressPiece.h"


class NBCastleSmallCorridorLeftTurnPiece : public NetherFortressPiece {

public:
    virtual ~NBCastleSmallCorridorLeftTurnPiece(); // _ZN34NBCastleSmallCorridorLeftTurnPieceD2Ev
    virtual void __fake_function0(); // fake
    virtual void getType()const; // _ZNK34NBCastleSmallCorridorLeftTurnPiece7getTypeEv
    virtual void addChildren(StructurePiece *, std::vector<std::unique_ptr<StructurePiece>> &, Random &); // _ZN34NBCastleSmallCorridorLeftTurnPiece11addChildrenEP14StructurePieceRSt6vectorISt10unique_ptrIS0_St14default_deleteIS0_EESaIS6_EER6Random
    virtual void postProcess(BlockSource *, Random &, BoundingBox const&); // _ZN34NBCastleSmallCorridorLeftTurnPiece11postProcessEP11BlockSourceR6RandomRK11BoundingBox
    void createPiece(std::vector<std::unique_ptr<StructurePiece>> &, Random &, int, int, int, int, int); // _ZN34NBCastleSmallCorridorLeftTurnPiece11createPieceERSt6vectorISt10unique_ptrI14StructurePieceSt14default_deleteIS2_EESaIS5_EER6Randomiiiii
    NBCastleSmallCorridorLeftTurnPiece(); // _ZN34NBCastleSmallCorridorLeftTurnPieceC2Ev
    NBCastleSmallCorridorLeftTurnPiece(int, Random &, BoundingBox const&, int); // _ZN34NBCastleSmallCorridorLeftTurnPieceC2EiR6RandomRK11BoundingBoxi
};
