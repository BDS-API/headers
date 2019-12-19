#pragma once

class Bat : Mob {

public:
    virtual Bat::~Bat();
    virtual void normalTick(void);
    virtual void checkFallDamage(float, bool);
    virtual void _hurt(ActorDamageSource const&, int, bool, bool);
    virtual void readAdditionalSaveData(CompoundTag const&, DataLoadHelper &);
    virtual void addAdditionalSaveData(CompoundTag &);
    virtual void pushActors(void);
    virtual void useNewAi(void)const;
    virtual void newServerAiStep(void);

    Bat(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
};
