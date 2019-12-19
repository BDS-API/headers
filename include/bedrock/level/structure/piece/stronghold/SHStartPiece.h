#pragma once

class SHStartPiece : SHStairsDown {

public:
    virtual SHStartPiece::~SHStartPiece();
    virtual void getType(void)const;

    SHStartPiece(void);
    SHStartPiece(int, Random &, int, int);
};
