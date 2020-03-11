#pragma once

#include "../bedrock/util/Vec3.h"
#include "../bedrock/actor/Actor.h"
#include "./MoveActorAbsoluteData.h"
#include "../bedrock/util/Vec2.h"


class MoveActorAbsoluteData {

public:

    MoveActorAbsoluteData();
    MoveActorAbsoluteData(Actor const&);
    void setRot(Vec2 const&);
    void setYHeadRot(float);
    void operator==(MoveActorAbsoluteData const&)const;
    bool isDifferenceSignificant(MoveActorAbsoluteData const&, Vec3 const&)const;
    void getRot()const;
    void getYHeadRot()const;
    void calculateDelta(MoveActorAbsoluteData const&)const;
    void getIntDelta(float, float);
};
