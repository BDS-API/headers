#pragma once

#include "NetherFortressPiece.h"
#include <vector>


class NBBridgeCrossing : NetherFortressPiece {

public:
    ~NBBridgeCrossing(); // _ZN16NBBridgeCrossingD2Ev
    virtual void getType()const; // _ZNK16NBBridgeCrossing7getTypeEv
    virtual void addChildren(StructurePiece *, std::vector<std::unique_ptr<StructurePiece>> &, Random &); // _ZN16NBBridgeCrossing11addChildrenEP14StructurePieceRSt6vectorISt10unique_ptrIS0_St14default_deleteIS0_EESaIS6_EER6Random
    virtual void postProcess(BlockSource *, Random &, BoundingBox const&); // _ZN16NBBridgeCrossing11postProcessEP11BlockSourceR6RandomRK11BoundingBox
    void createPiece(std::vector<std::unique_ptr<StructurePiece>> &, Random &, int, int, int, int, int); // _ZN16NBBridgeCrossing11createPieceERSt6vectorISt10unique_ptrI14StructurePieceSt14default_deleteIS2_EESaIS5_EER6Randomiiiii
    NBBridgeCrossing(); // _ZN16NBBridgeCrossingC2Ev
    NBBridgeCrossing(int, BoundingBox const&, int); // _ZN16NBBridgeCrossingC2EiRK11BoundingBoxi
    NBBridgeCrossing(Random &, int, int); // _ZN16NBBridgeCrossingC2ER6Randomii
};
