#pragma once

class Horse : Animal {

public:
    static long Horse::DATA_AGE;
    static long Horse::DONKEY_CHEST_COUNT;

    virtual void reloadHardcoded(Actor::InitializationMethod, VariantParameterList const&);
    virtual ~Horse();
    virtual void getInterpolatedRidingOffset(float)const;
    virtual void normalTick(void);
    virtual void positionRider(Actor &, float);
    virtual void getShadowRadius(void)const;
    virtual bool isImmobile(void)const;
    virtual void onFailedTame(void);
    virtual void setStanding(bool);
    virtual void feed(int);
    virtual void getControllingPlayer(void)const;
    virtual void causeFallDamage(float);
    virtual void handleFallDistanceOnServer(float, bool);
    virtual void openContainerComponent(Player &);
    virtual void die(ActorDamageSource const&);
    virtual void _hurt(ActorDamageSource const&, int, bool, bool);
    virtual void _playStepSound(BlockPos const&, Block const&);
    virtual void getAmbientSoundPostponeTicks(void);
    virtual void travel(float, float, float);
    virtual void aiStep(void);
    virtual void getArmorValue(void);
    virtual void useNewAi(void)const;
    virtual void setType(int);
    virtual void getType(void)const;
    virtual void setEating(bool);
    virtual void getEatAnim(float);
    virtual void getStandAnim(float)const;
    virtual void getMouthAnim(float);
    virtual bool canWearArmor(void)const;
    virtual void getHasReproduced(void)const;
    virtual void setBred(bool);
    virtual void setReproduced(bool);
    virtual bool isAmuletHorse(void);
    virtual bool isUndead(void)const;
    virtual bool isSterile(void)const;
    virtual bool isAdult(void)const;
    virtual bool isEating(void)const;
    virtual bool isBred(void)const;
    virtual void makeMad(void);
    virtual void nameYOffset(void);
    virtual void tameToPlayer(Player *, bool);
    virtual void getClosestMommy(Actor *, float);

    void Horse(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
    void getHorseFlag(HorseFlags)const;
    void setHorseFlag(HorseFlags, bool);
    void openMouth(void);
    void createInventory(void);
    void doPlayerRide(Player *);
    void moveTail(void);
    bool isReadyForParenting(void)const;
    void rideableEntity(void);
    void generateRandomMaxHealth(void);
    void generateRandomJumpStrength(void);
    void generateRandomSpeed(void);
    bool isHorseArmor(Item *);
};
