#pragma once

#include "../bedrock/actor/Mob.h"
#include "../bedrock/util/Vec3.h"
#include <memory>
#include "../bedrock/actor/Actor.h"
#include "../bedrock/control/LookControl.h"


class LookControlComponent {

public:
    void setHasWantedRotation(bool);
    void getHasWantedRotation()const;
    void getWantedPosition()const;
    void setLookAtPosition(Actor const*, float, float);
    void initialize(Mob &);
    void setYMax(float);
    LookControlComponent();
    void setInternalType(std::unique_ptr<LookControl>);
    void setLookAtPosition(Vec3 const&, float, float);
    ~LookControlComponent();
    void getHasWantedPosition()const;
    void getYMax()const;
    LookControlComponent(LookControlComponent &&);
    void getWantedRotation()const;
    void setLookAtRotation(Vec3 const&, float, float);
    void getXMax()const;
    void update(Mob &);
    void setHasWantedPosition(bool);
};
