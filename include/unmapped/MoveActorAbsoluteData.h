#pragma once



class MoveActorAbsoluteData {

public:
    class Header;

    void setYHeadRot(float);
    MoveActorAbsoluteData(Actor const&);
    void getIntDelta(float, float);
    void calculateDelta(MoveActorAbsoluteData const&)const;
    MoveActorAbsoluteData();
    void getRot()const;
    bool isDifferenceSignificant(MoveActorAbsoluteData const&, Vec3 const&)const;
    void operator==(MoveActorAbsoluteData const&)const;
    void setRot(Vec2 const&);
    void getYHeadRot()const;
    class Header {

    public:
        Header();
    };
};
