#pragma once

#include "damagesource/ActorDamageSource"
#include "unmapped/ActorDefinitionGroup"
#include "../item/Item"
#include "../util/BlockPos"
#include "../../unmapped/VariantParameterList"
#include "../../unmapped/Block"
#include "unmapped/ActorDefinitionIdentifier"


class Horse : Animal {

public:
    static long DATA_AGE;
    static long DONKEY_CHEST_COUNT;

    virtual void reloadHardcoded(Actor::InitializationMethod, VariantParameterList const&);
    virtual Horse::~Horse()
    virtual void getInterpolatedRidingOffset(float)const;
    virtual void normalTick();
    virtual void positionRider(Actor &, float);
    virtual void getShadowRadius()const;
    virtual bool isImmobile()const;
    virtual void onFailedTame();
    virtual void setStanding(bool);
    virtual void feed(int);
    virtual void getControllingPlayer()const;
    virtual void causeFallDamage(float);
    virtual void handleFallDistanceOnServer(float, bool);
    virtual void openContainerComponent(Player &);
    virtual void die(ActorDamageSource const&);
    virtual void _hurt(ActorDamageSource const&, int, bool, bool);
    virtual void _playStepSound(BlockPos const&, Block const&);
    virtual void getAmbientSoundPostponeTicks();
    virtual void travel(float, float, float);
    virtual void aiStep();
    virtual void getArmorValue();
    virtual void useNewAi()const;
    virtual void setType(int);
    virtual void getType()const;
    virtual void setEating(bool);
    virtual void getEatAnim(float);
    virtual void getStandAnim(float)const;
    virtual void getMouthAnim(float);
    virtual bool canWearArmor()const;
    virtual void getHasReproduced()const;
    virtual void setBred(bool);
    virtual void setReproduced(bool);
    virtual bool isAmuletHorse();
    virtual bool isUndead()const;
    virtual bool isSterile()const;
    virtual bool isAdult()const;
    virtual bool isEating()const;
    virtual bool isBred()const;
    virtual void makeMad();
    virtual void nameYOffset();
    virtual void tameToPlayer(Player *, bool);
    virtual void getClosestMommy(Actor *, float);
    virtual void getMadSound();

    Horse(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
    void getHorseFlag(HorseFlags)const;
    void setHorseFlag(HorseFlags, bool);
    void openMouth();
    void createInventory();
    void doPlayerRide(Player *);
    void moveTail();
    bool isReadyForParenting()const;
    void rideableEntity();
    void generateRandomMaxHealth();
    void generateRandomJumpStrength();
    void generateRandomSpeed();
    bool isHorseArmor(Item *);
};
