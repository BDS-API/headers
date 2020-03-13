#pragma once

#include "NetherFortressPiece.h"
#include <vector>


class NBStairsRoom : NetherFortressPiece {

public:
    ~NBStairsRoom(); // _ZN12NBStairsRoomD2Ev
    virtual void getType()const; // _ZNK12NBStairsRoom7getTypeEv
    virtual void addChildren(StructurePiece *, std::vector<std::unique_ptr<StructurePiece>> &, Random &); // _ZN12NBStairsRoom11addChildrenEP14StructurePieceRSt6vectorISt10unique_ptrIS0_St14default_deleteIS0_EESaIS6_EER6Random
    virtual void postProcess(BlockSource *, Random &, BoundingBox const&); // _ZN12NBStairsRoom11postProcessEP11BlockSourceR6RandomRK11BoundingBox
    void createPiece(std::vector<std::unique_ptr<StructurePiece>> &, Random &, int, int, int, int, int); // _ZN12NBStairsRoom11createPieceERSt6vectorISt10unique_ptrI14StructurePieceSt14default_deleteIS2_EESaIS5_EER6Randomiiiii
    NBStairsRoom(); // _ZN12NBStairsRoomC2Ev
    NBStairsRoom(int, BoundingBox const&, int); // _ZN12NBStairsRoomC2EiRK11BoundingBoxi
};
