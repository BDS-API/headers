#pragma once

#include "../../../util/Random"


class NBStartPiece : NBBridgeCrossing {

public:
    NBStartPiece::~NBStartPiece()
    virtual void getType()const;

    NBStartPiece(void);
    NBStartPiece(Random &, int, int);
};
