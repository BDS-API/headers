#pragma once

class Blaze : Monster {

public:
    virtual ~Blaze();
    virtual void normalTick(void);
    virtual void getBrightness(float)const;
    virtual bool isOnFire(void)const;
    virtual void travel(float, float, float);
    virtual void aiStep(void);
    virtual void useNewAi(void)const;
    virtual bool isDarkEnoughToSpawn(void)const;

    void Blaze(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
};
