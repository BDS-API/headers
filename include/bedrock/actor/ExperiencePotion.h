#pragma once

#include "Throwable.h"


class ExperiencePotion : public Throwable {

public:
    virtual ~ExperiencePotion(); // _ZN16ExperiencePotionD2Ev
    virtual void __fake_function0(); // fake
    virtual void getThrowPower(); // _ZN16ExperiencePotion13getThrowPowerEv
    virtual void getThrowUpAngleOffset(); // _ZN16ExperiencePotion21getThrowUpAngleOffsetEv
    virtual void getGravity(); // _ZN16ExperiencePotion10getGravityEv
    ExperiencePotion(ActorDefinitionGroup *, ActorDefinitionIdentifier const&); // _ZN16ExperiencePotionC2EP20ActorDefinitionGroupRK25ActorDefinitionIdentifier
};
