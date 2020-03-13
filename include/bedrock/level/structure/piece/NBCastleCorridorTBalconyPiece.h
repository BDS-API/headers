#pragma once

#include "NetherFortressPiece.h"
#include <vector>


class NBCastleCorridorTBalconyPiece : NetherFortressPiece {

public:
    ~NBCastleCorridorTBalconyPiece(); // _ZN29NBCastleCorridorTBalconyPieceD2Ev
    virtual void getType()const; // _ZNK29NBCastleCorridorTBalconyPiece7getTypeEv
    virtual void addChildren(StructurePiece *, std::vector<std::unique_ptr<StructurePiece>> &, Random &); // _ZN29NBCastleCorridorTBalconyPiece11addChildrenEP14StructurePieceRSt6vectorISt10unique_ptrIS0_St14default_deleteIS0_EESaIS6_EER6Random
    virtual void postProcess(BlockSource *, Random &, BoundingBox const&); // _ZN29NBCastleCorridorTBalconyPiece11postProcessEP11BlockSourceR6RandomRK11BoundingBox
    void createPiece(std::vector<std::unique_ptr<StructurePiece>> &, Random &, int, int, int, int, int); // _ZN29NBCastleCorridorTBalconyPiece11createPieceERSt6vectorISt10unique_ptrI14StructurePieceSt14default_deleteIS2_EESaIS5_EER6Randomiiiii
    NBCastleCorridorTBalconyPiece(); // _ZN29NBCastleCorridorTBalconyPieceC2Ev
    NBCastleCorridorTBalconyPiece(int, BoundingBox const&, int); // _ZN29NBCastleCorridorTBalconyPieceC2EiRK11BoundingBoxi
};
