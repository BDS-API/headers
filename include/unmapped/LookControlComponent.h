#pragma once

#include "../bedrock/actor/Mob"
#include "../bedrock/actor/Actor"
#include "../bedrock/util/Vec3"
#include "../bedrock/control/LookControl"


class LookControlComponent {

public:

    LookControlComponent(LookControlComponent&&);
    LookControlComponent(void);
    void initialize(Mob &);
    void setInternalType(std::unique_ptr<LookControl, std::default_delete<LookControl>>);
    void getHasWantedPosition()const;
    void setHasWantedPosition(bool);
    void getHasWantedRotation()const;
    void setHasWantedRotation(bool);
    void getXMax()const;
    void getYMax()const;
    void setYMax(float);
    void getWantedPosition()const;
    void getWantedRotation()const;
    void setLookAtPosition(Actor const*, float, float);
    void setLookAtPosition(Vec3 const&, float, float);
    void setLookAtRotation(Vec3 const&, float, float);
    void update(Mob &);
};
