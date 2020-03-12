#pragma once

#include "../../../../util/Random.h"
#include "SHStairsDown.h"


class SHStartPiece : SHStairsDown {

public:
    virtual void getType()const;
    ~SHStartPiece();
    SHStartPiece(int, Random &, int, int);
    SHStartPiece();
};
