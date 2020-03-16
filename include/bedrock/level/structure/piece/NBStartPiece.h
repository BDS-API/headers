#pragma once

#include "NBBridgeCrossing.h"


class NBStartPiece : public NBBridgeCrossing {

public:
    virtual ~NBStartPiece(); // _ZN12NBStartPieceD2Ev
    virtual void __fake_function0(); // fake
    virtual void getType()const; // _ZNK12NBStartPiece7getTypeEv
    NBStartPiece(); // _ZN12NBStartPieceC2Ev
    NBStartPiece(Random &, int, int); // _ZN12NBStartPieceC2ER6Randomii
};
