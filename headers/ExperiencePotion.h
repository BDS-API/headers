#pragma once

class ExperiencePotion : Throwable {

public:
    virtual ~ExperiencePotion();
    virtual void getThrowPower(void);
    virtual void getThrowUpAngleOffset(void);
    virtual void getGravity(void);

    void ExperiencePotion(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
};
