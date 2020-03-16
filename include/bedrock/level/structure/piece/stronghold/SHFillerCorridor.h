#pragma once

#include "../StrongholdPiece.h"
#include <vector>


class SHFillerCorridor : public StrongholdPiece {

public:
    virtual ~SHFillerCorridor(); // _ZN16SHFillerCorridorD2Ev
    virtual void __fake_function0(); // fake
    virtual void getType()const; // _ZNK16SHFillerCorridor7getTypeEv
    virtual void addChildren(StructurePiece *, std::vector<std::unique_ptr<StructurePiece>> &, Random &); // _ZN16SHFillerCorridor11addChildrenEP14StructurePieceRSt6vectorISt10unique_ptrIS0_St14default_deleteIS0_EESaIS6_EER6Random
    virtual void postProcess(BlockSource *, Random &, BoundingBox const&); // _ZN16SHFillerCorridor11postProcessEP11BlockSourceR6RandomRK11BoundingBox
    void findPieceBox(std::vector<std::unique_ptr<StructurePiece>> &, Random &, int, int, int, int); // _ZN16SHFillerCorridor12findPieceBoxERSt6vectorISt10unique_ptrI14StructurePieceSt14default_deleteIS2_EESaIS5_EER6Randomiiii
    SHFillerCorridor(); // _ZN16SHFillerCorridorC2Ev
    SHFillerCorridor(int, Random &, BoundingBox const&, int); // _ZN16SHFillerCorridorC2EiR6RandomRK11BoundingBoxi
};
