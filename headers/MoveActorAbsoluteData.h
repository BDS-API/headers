#pragma once

class MoveActorAbsoluteData {

public:

    void MoveActorAbsoluteData(void);
    void MoveActorAbsoluteData(Actor const&);
    void setRot(Vec2 const&);
    void setYHeadRot(float);
    bool isDifferenceSignificant(MoveActorAbsoluteData const&, Vec3 const&)const;
    void getRot(void)const;
    void getYHeadRot(void)const;
    void calculateDelta(MoveActorAbsoluteData const&)const;
    void getIntDelta(float, float);
};
