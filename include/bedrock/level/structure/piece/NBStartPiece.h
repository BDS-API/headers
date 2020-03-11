#pragma once

#include "./NBBridgeCrossing.h"
#include "../../../util/Random.h"


class NBStartPiece : NBBridgeCrossing {

public:
    virtual ~NBStartPiece();
    virtual void getType()const;

    NBStartPiece();
    NBStartPiece(Random &, int, int);
};
