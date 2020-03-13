#pragma once

#include "NetherFortressPiece.h"
#include <vector>


class NBCastleStalkRoom : NetherFortressPiece {

public:
    ~NBCastleStalkRoom(); // _ZN17NBCastleStalkRoomD2Ev
    virtual void getType()const; // _ZNK17NBCastleStalkRoom7getTypeEv
    virtual void addChildren(StructurePiece *, std::vector<std::unique_ptr<StructurePiece>> &, Random &); // _ZN17NBCastleStalkRoom11addChildrenEP14StructurePieceRSt6vectorISt10unique_ptrIS0_St14default_deleteIS0_EESaIS6_EER6Random
    virtual void postProcess(BlockSource *, Random &, BoundingBox const&); // _ZN17NBCastleStalkRoom11postProcessEP11BlockSourceR6RandomRK11BoundingBox
    void createPiece(std::vector<std::unique_ptr<StructurePiece>> &, Random &, int, int, int, int, int); // _ZN17NBCastleStalkRoom11createPieceERSt6vectorISt10unique_ptrI14StructurePieceSt14default_deleteIS2_EESaIS5_EER6Randomiiiii
    NBCastleStalkRoom(); // _ZN17NBCastleStalkRoomC2Ev
    NBCastleStalkRoom(int, BoundingBox const&, int); // _ZN17NBCastleStalkRoomC2EiRK11BoundingBoxi
};
