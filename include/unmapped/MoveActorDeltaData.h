#pragma once



class MoveActorDeltaData {

public:
    class Header;

    void applyIntDelta(float, int);
    void parseDeltas(MoveActorAbsoluteData const&)const;
    MoveActorDeltaData();
    class Header {

    public:
        Header();
    };
};
