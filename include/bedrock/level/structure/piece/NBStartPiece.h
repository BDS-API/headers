#pragma once

class NBStartPiece : NBBridgeCrossing {

public:
    virtual NBStartPiece::~NBStartPiece();
    virtual void getType(void)const;

    NBStartPiece(void);
    NBStartPiece(Random &, int, int);
};
