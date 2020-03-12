#pragma once

#include "SHStairsDown.h"


class SHStartPiece : SHStairsDown {

public:
    ~SHStartPiece();
    virtual void getType()const;
    SHStartPiece(int, Random &, int, int);
    SHStartPiece();
};
