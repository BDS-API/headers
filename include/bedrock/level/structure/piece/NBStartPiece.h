#pragma once

#include "NBBridgeCrossing.h"


class NBStartPiece : NBBridgeCrossing {

public:
    ~NBStartPiece(); // _ZN12NBStartPieceD2Ev
    virtual void getType()const; // _ZNK12NBStartPiece7getTypeEv
    NBStartPiece(); // _ZN12NBStartPieceC2Ev
    NBStartPiece(Random &, int, int); // _ZN12NBStartPieceC2ER6Randomii
};
