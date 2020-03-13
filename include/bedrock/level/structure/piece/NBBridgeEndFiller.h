#pragma once

#include "NetherFortressPiece.h"
#include <vector>


class NBBridgeEndFiller : NetherFortressPiece {

public:
    ~NBBridgeEndFiller(); // _ZN17NBBridgeEndFillerD2Ev
    virtual void getType()const; // _ZNK17NBBridgeEndFiller7getTypeEv
    virtual void postProcess(BlockSource *, Random &, BoundingBox const&); // _ZN17NBBridgeEndFiller11postProcessEP11BlockSourceR6RandomRK11BoundingBox
    void createPiece(std::vector<std::unique_ptr<StructurePiece>> &, Random &, int, int, int, int, int); // _ZN17NBBridgeEndFiller11createPieceERSt6vectorISt10unique_ptrI14StructurePieceSt14default_deleteIS2_EESaIS5_EER6Randomiiiii
    NBBridgeEndFiller(); // _ZN17NBBridgeEndFillerC2Ev
    NBBridgeEndFiller(int, Random &, BoundingBox const&, int); // _ZN17NBBridgeEndFillerC2EiR6RandomRK11BoundingBoxi
};
