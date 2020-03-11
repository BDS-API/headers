#pragma once

#include "./MoveActorAbsoluteData.h"


class MoveActorDeltaData {

public:

    MoveActorDeltaData();
    void parseDeltas(MoveActorAbsoluteData const&)const;
    void applyIntDelta(float, int);
};
