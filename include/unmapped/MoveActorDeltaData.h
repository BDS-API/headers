#pragma once

#include "MoveActorAbsoluteData.h"


class MoveActorDeltaData {

public:
    class Header;

    MoveActorDeltaData();
    void applyIntDelta(float, int);
    void parseDeltas(MoveActorAbsoluteData const&)const;
    class Header {

    public:
        Header();
    };
};
