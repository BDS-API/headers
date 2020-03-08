#pragma once

#include "../../../../unmapped/Random"


class NBStartPiece : NBBridgeCrossing {

public:
    virtual NBStartPiece::~NBStartPiece();
    virtual void getType(void)const;

    NBStartPiece(void);
    NBStartPiece(Random &, int, int);
};
