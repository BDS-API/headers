#pragma once



class MoveActorDeltaData {

public:

    MoveActorDeltaData(void);
    void parseDeltas(MoveActorAbsoluteData const&)const;
    void applyIntDelta(float, int);
};
