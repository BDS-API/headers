#pragma once

#include "unmapped/ActorDefinitionIdentifier.h"
#include "unmapped/ActorDefinitionGroup.h"
#include "Throwable.h"


class ExperiencePotion : Throwable {

public:
    virtual void getGravity();
    virtual void getThrowPower();
    virtual void getThrowUpAngleOffset();
    ~ExperiencePotion();
    ExperiencePotion(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
};
