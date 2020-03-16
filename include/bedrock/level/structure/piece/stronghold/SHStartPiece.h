#pragma once

#include "SHStairsDown.h"


class SHStartPiece : public SHStairsDown {

public:
    virtual ~SHStartPiece(); // _ZN12SHStartPieceD2Ev
    virtual void __fake_function0(); // fake
    virtual void getType()const; // _ZNK12SHStartPiece7getTypeEv
    SHStartPiece(); // _ZN12SHStartPieceC2Ev
    SHStartPiece(int, Random &, int, int); // _ZN12SHStartPieceC2EiR6Randomii
};
