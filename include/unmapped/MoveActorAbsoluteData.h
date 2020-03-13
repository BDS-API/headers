#pragma once



class MoveActorAbsoluteData {

public:
    class Header;

    MoveActorAbsoluteData(); // _ZN21MoveActorAbsoluteDataC2Ev
    MoveActorAbsoluteData(Actor const&); // _ZN21MoveActorAbsoluteDataC2ERK5Actor
    void setRot(Vec2 const&); // _ZN21MoveActorAbsoluteData6setRotERK4Vec2
    void setYHeadRot(float); // _ZN21MoveActorAbsoluteData11setYHeadRotEf
    void operator==(MoveActorAbsoluteData const&)const; // _ZNK21MoveActorAbsoluteDataeqERKS_
    bool isDifferenceSignificant(MoveActorAbsoluteData const&, Vec3 const&)const; // _ZNK21MoveActorAbsoluteData23isDifferenceSignificantERKS_RK4Vec3
    void getRot()const; // _ZNK21MoveActorAbsoluteData6getRotEv
    void getYHeadRot()const; // _ZNK21MoveActorAbsoluteData11getYHeadRotEv
    void calculateDelta(MoveActorAbsoluteData const&)const; // _ZNK21MoveActorAbsoluteData14calculateDeltaERKS_
    void getIntDelta(float, float); // _ZN21MoveActorAbsoluteData11getIntDeltaEff
    class Header {

    public:
        Header(); // _ZN21MoveActorAbsoluteData6HeaderC2Ev
    };
};
