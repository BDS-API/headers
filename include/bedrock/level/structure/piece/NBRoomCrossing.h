#pragma once

#include "NetherFortressPiece.h"
#include <vector>


class NBRoomCrossing : NetherFortressPiece {

public:
    ~NBRoomCrossing(); // _ZN14NBRoomCrossingD2Ev
    virtual void getType()const; // _ZNK14NBRoomCrossing7getTypeEv
    virtual void addChildren(StructurePiece *, std::vector<std::unique_ptr<StructurePiece>> &, Random &); // _ZN14NBRoomCrossing11addChildrenEP14StructurePieceRSt6vectorISt10unique_ptrIS0_St14default_deleteIS0_EESaIS6_EER6Random
    virtual void postProcess(BlockSource *, Random &, BoundingBox const&); // _ZN14NBRoomCrossing11postProcessEP11BlockSourceR6RandomRK11BoundingBox
    void createPiece(std::vector<std::unique_ptr<StructurePiece>> &, Random &, int, int, int, int, int); // _ZN14NBRoomCrossing11createPieceERSt6vectorISt10unique_ptrI14StructurePieceSt14default_deleteIS2_EESaIS5_EER6Randomiiiii
    NBRoomCrossing(); // _ZN14NBRoomCrossingC2Ev
    NBRoomCrossing(int, BoundingBox const&, int); // _ZN14NBRoomCrossingC2EiRK11BoundingBoxi
};
