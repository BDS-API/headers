#pragma once

#include "unmapped/ActorDefinitionIdentifier"
#include "unmapped/ActorDefinitionGroup"


class ExperiencePotion : Throwable {

public:
    virtual ExperiencePotion::~ExperiencePotion()
    virtual void getThrowPower();
    virtual void getThrowUpAngleOffset();
    virtual void getGravity();

    ExperiencePotion(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
};
