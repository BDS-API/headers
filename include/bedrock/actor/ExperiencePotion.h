#pragma once

#include "Throwable.h"


class ExperiencePotion : Throwable {

public:
    virtual void getThrowPower();
    virtual void getGravity();
    ~ExperiencePotion();
    virtual void getThrowUpAngleOffset();
    ExperiencePotion(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
};
