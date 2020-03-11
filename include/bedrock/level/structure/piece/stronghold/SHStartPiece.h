#pragma once

#include "./SHStairsDown.h"
#include "../../../../util/Random.h"


class SHStartPiece : SHStairsDown {

public:
    virtual ~SHStartPiece();
    virtual void getType()const;

    SHStartPiece();
    SHStartPiece(int, Random &, int, int);
};
