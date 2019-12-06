#pragma once

class SHStartPiece : SHStairsDown {

public:
    virtual ~SHStartPiece();
    virtual void getType(void)const;

    void SHStartPiece(void);
    void SHStartPiece(int, Random &, int, int);
};
