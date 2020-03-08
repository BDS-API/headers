#pragma once

#include "../../../../util/Random"


class SHStartPiece : SHStairsDown {

public:
    SHStartPiece::~SHStartPiece()
    virtual void getType()const;

    SHStartPiece(void);
    SHStartPiece(int, Random &, int, int);
};
