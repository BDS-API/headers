#pragma once

#include <vector>
#include "../StrongholdPiece.h"


class SHPortalRoom : StrongholdPiece {

public:
    ~SHPortalRoom(); // _ZN12SHPortalRoomD2Ev
    virtual void getType()const; // _ZNK12SHPortalRoom7getTypeEv
    virtual void addChildren(StructurePiece *, std::vector<std::unique_ptr<StructurePiece>> &, Random &); // _ZN12SHPortalRoom11addChildrenEP14StructurePieceRSt6vectorISt10unique_ptrIS0_St14default_deleteIS0_EESaIS6_EER6Random
    virtual void postProcess(BlockSource *, Random &, BoundingBox const&); // _ZN12SHPortalRoom11postProcessEP11BlockSourceR6RandomRK11BoundingBox
    void createPiece(std::vector<std::unique_ptr<StructurePiece>> &, Random &, int, int, int, int, int); // _ZN12SHPortalRoom11createPieceERSt6vectorISt10unique_ptrI14StructurePieceSt14default_deleteIS2_EESaIS5_EER6Randomiiiii
    SHPortalRoom(); // _ZN12SHPortalRoomC2Ev
    SHPortalRoom(int, BoundingBox const&, int); // _ZN12SHPortalRoomC2EiRK11BoundingBoxi
};
