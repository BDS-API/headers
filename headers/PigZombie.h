#pragma once

class PigZombie : Zombie {

public:
    static long PigZombie::SPEED_MODIFIER_ATTACK_UUID;

    virtual ~PigZombie();
    virtual void normalTick(void);
    virtual void findAttackTarget(void);
    virtual void _hurt(ActorDamageSource const&, int, bool, bool);
    virtual void readAdditionalSaveData(CompoundTag const&, DataLoadHelper &);
    virtual void addAdditionalSaveData(CompoundTag &);
    virtual void checkSpawnRules(bool);
    virtual void getAttackTime(void);

    void PigZombie(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
    void _alert(Mob &);
};
