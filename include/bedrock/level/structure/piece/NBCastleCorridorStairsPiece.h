#pragma once

#include "NetherFortressPiece.h"
#include <vector>


class NBCastleCorridorStairsPiece : NetherFortressPiece {

public:
    ~NBCastleCorridorStairsPiece(); // _ZN27NBCastleCorridorStairsPieceD2Ev
    virtual void getType()const; // _ZNK27NBCastleCorridorStairsPiece7getTypeEv
    virtual void addChildren(StructurePiece *, std::vector<std::unique_ptr<StructurePiece>> &, Random &); // _ZN27NBCastleCorridorStairsPiece11addChildrenEP14StructurePieceRSt6vectorISt10unique_ptrIS0_St14default_deleteIS0_EESaIS6_EER6Random
    virtual void postProcess(BlockSource *, Random &, BoundingBox const&); // _ZN27NBCastleCorridorStairsPiece11postProcessEP11BlockSourceR6RandomRK11BoundingBox
    void createPiece(std::vector<std::unique_ptr<StructurePiece>> &, Random &, int, int, int, int, int); // _ZN27NBCastleCorridorStairsPiece11createPieceERSt6vectorISt10unique_ptrI14StructurePieceSt14default_deleteIS2_EESaIS5_EER6Randomiiiii
    NBCastleCorridorStairsPiece(); // _ZN27NBCastleCorridorStairsPieceC2Ev
    NBCastleCorridorStairsPiece(int, BoundingBox const&, int); // _ZN27NBCastleCorridorStairsPieceC2EiRK11BoundingBoxi
};
