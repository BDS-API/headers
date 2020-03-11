#pragma once

#include "./Throwable.h"
#include "unmapped/ActorDefinitionGroup.h"
#include "unmapped/ActorDefinitionIdentifier.h"


class ExperiencePotion : Throwable {

public:
    virtual ~ExperiencePotion();
    virtual void getThrowPower();
    virtual void getThrowUpAngleOffset();
    virtual void getGravity();

    ExperiencePotion(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
};
