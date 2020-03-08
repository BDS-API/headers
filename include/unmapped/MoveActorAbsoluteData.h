#pragma once

#include "../bedrock/actor/Actor"
#include "../bedrock/util/Vec3"
#include "../bedrock/util/Vec2"


class MoveActorAbsoluteData {

public:

    MoveActorAbsoluteData(void);
    MoveActorAbsoluteData(Actor const&);
    void setRot(Vec2 const&);
    void setYHeadRot(float);
    bool isDifferenceSignificant(MoveActorAbsoluteData const&, Vec3 const&)const;
    void getRot()const;
    void getYHeadRot()const;
    void calculateDelta(MoveActorAbsoluteData const&)const;
    void getIntDelta(float, float);
};
