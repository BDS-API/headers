#pragma once

#include "NBBridgeCrossing.h"


class NBStartPiece : NBBridgeCrossing {

public:
    virtual void getType()const;
    ~NBStartPiece();
    NBStartPiece(Random &, int, int);
    NBStartPiece();
};
