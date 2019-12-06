#pragma once

class Slime : Monster {

public:
    virtual void reloadHardcoded(Actor::InitializationMethod, VariantParameterList const&);
    virtual ~Slime();
    virtual void remove(void);
    virtual void normalTick(void);
    virtual void getShadowRadius(void)const;
    virtual void playerTouch(Player &);
    virtual void findAttackTarget(void);
    virtual void onSynchedDataUpdate(int);
    virtual void readAdditionalSaveData(CompoundTag const&, DataLoadHelper &);
    virtual void addAdditionalSaveData(CompoundTag &);
    virtual void aiStep(void);
    virtual void checkSpawnRules(bool);
    virtual void _getWalkTargetValue(BlockPos const&);
    virtual void useNewAi(void)const;
    virtual bool canDealDamage(void);
    virtual void getSquishSound(void);
    virtual void setSlimeSize(int);
    virtual void doPlayJumpSound(void);
    virtual void doPlayLandSound(void);
    virtual void playJumpSound(void);
    virtual void playLandSound(void);
    virtual void decreaseSquish(void);
    virtual void createChild(int);

    void Slime(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
    void getSlimeSize(void)const;
    void justLanded(void);
    void justJumped(void);
    void _getRandomSeedFromSlimeChunk(ChunkPos);
    void getSquishValue(void)const;
    void getOldSquishValue(void)const;
    void getTargetSquish(void)const;
};
