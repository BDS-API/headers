#pragma once

#include "../StrongholdPiece.h"
#include <vector>


class SHRoomCrossing : public StrongholdPiece {

public:
    virtual ~SHRoomCrossing(); // _ZN14SHRoomCrossingD2Ev
    virtual void __fake_function0(); // fake
    virtual void getType()const; // _ZNK14SHRoomCrossing7getTypeEv
    virtual void addChildren(StructurePiece *, std::vector<std::unique_ptr<StructurePiece>> &, Random &); // _ZN14SHRoomCrossing11addChildrenEP14StructurePieceRSt6vectorISt10unique_ptrIS0_St14default_deleteIS0_EESaIS6_EER6Random
    virtual void postProcess(BlockSource *, Random &, BoundingBox const&); // _ZN14SHRoomCrossing11postProcessEP11BlockSourceR6RandomRK11BoundingBox
    void createPiece(std::vector<std::unique_ptr<StructurePiece>> &, Random &, int, int, int, int, int); // _ZN14SHRoomCrossing11createPieceERSt6vectorISt10unique_ptrI14StructurePieceSt14default_deleteIS2_EESaIS5_EER6Randomiiiii
    SHRoomCrossing(); // _ZN14SHRoomCrossingC2Ev
    SHRoomCrossing(int, Random &, BoundingBox const&, int); // _ZN14SHRoomCrossingC2EiR6RandomRK11BoundingBoxi
};
