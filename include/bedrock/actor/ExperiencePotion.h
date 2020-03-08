#pragma once

#include "../../unmapped/ActorDefinitionGroup"


class ExperiencePotion : Throwable {

public:
    virtual ExperiencePotion::~ExperiencePotion();
    virtual void getThrowPower(void);
    virtual void getThrowUpAngleOffset(void);
    virtual void getGravity(void);

    ExperiencePotion(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
};
