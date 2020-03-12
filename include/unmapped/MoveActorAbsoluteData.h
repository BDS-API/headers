#pragma once

#include "../bedrock/util/Vec3.h"
#include "../bedrock/util/Vec2.h"
#include "../bedrock/actor/Actor.h"


class MoveActorAbsoluteData {

public:
    class Header;

    MoveActorAbsoluteData(Actor const&);
    void calculateDelta(MoveActorAbsoluteData const&)const;
    bool isDifferenceSignificant(MoveActorAbsoluteData const&, Vec3 const&)const;
    void getYHeadRot()const;
    void operator==(MoveActorAbsoluteData const&)const;
    void setYHeadRot(float);
    void getRot()const;
    void getIntDelta(float, float);
    MoveActorAbsoluteData();
    void setRot(Vec2 const&);
    class Header {

    public:
        Header();
    };
};
