#pragma once

#include "NetherFortressPiece.h"
#include <vector>


class NBCastleEntrance : NetherFortressPiece {

public:
    ~NBCastleEntrance(); // _ZN16NBCastleEntranceD2Ev
    virtual void getType()const; // _ZNK16NBCastleEntrance7getTypeEv
    virtual void addChildren(StructurePiece *, std::vector<std::unique_ptr<StructurePiece>> &, Random &); // _ZN16NBCastleEntrance11addChildrenEP14StructurePieceRSt6vectorISt10unique_ptrIS0_St14default_deleteIS0_EESaIS6_EER6Random
    virtual void postProcess(BlockSource *, Random &, BoundingBox const&); // _ZN16NBCastleEntrance11postProcessEP11BlockSourceR6RandomRK11BoundingBox
    void createPiece(std::vector<std::unique_ptr<StructurePiece>> &, Random &, int, int, int, int, int); // _ZN16NBCastleEntrance11createPieceERSt6vectorISt10unique_ptrI14StructurePieceSt14default_deleteIS2_EESaIS5_EER6Randomiiiii
    NBCastleEntrance(); // _ZN16NBCastleEntranceC2Ev
    NBCastleEntrance(int, BoundingBox const&, int); // _ZN16NBCastleEntranceC2EiRK11BoundingBoxi
};
