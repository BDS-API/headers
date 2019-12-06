#pragma once

class MoveActorDeltaData {

public:

    void MoveActorDeltaData(void);
    void parseDeltas(MoveActorAbsoluteData const&)const;
    void applyIntDelta(float, int);
};
