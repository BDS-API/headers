#pragma once

#include "../../../util/Random"


class NBStartPiece : NBBridgeCrossing {

public:
    virtual NBStartPiece::~NBStartPiece()
    virtual void getType()const;

    NBStartPiece(void);
    NBStartPiece(Random &, int, int);
};
