#pragma once

#include "../../../util/Random.h"
#include "NBBridgeCrossing.h"


class NBStartPiece : NBBridgeCrossing {

public:
    virtual void getType()const;
    ~NBStartPiece();
    NBStartPiece();
    NBStartPiece(Random &, int, int);
};
