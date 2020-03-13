#pragma once



class MoveActorDeltaData {

public:
    class Header;

    MoveActorDeltaData(); // _ZN18MoveActorDeltaDataC2Ev
    void parseDeltas(MoveActorAbsoluteData const&)const; // _ZNK18MoveActorDeltaData11parseDeltasERK21MoveActorAbsoluteData
    void applyIntDelta(float, int); // _ZN18MoveActorDeltaData13applyIntDeltaEfi
    class Header {

    public:
        Header(); // _ZN18MoveActorDeltaData6HeaderC2Ev
    };
};
