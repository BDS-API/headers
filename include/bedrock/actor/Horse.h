#pragma once

#include <string>
#include "Animal.h"


class Horse : Animal {

public:
    static long DATA_AGE;
    static long DONKEY_CHEST_COUNT;

    virtual void travel(float, float, float);
    virtual void _hurt(ActorDamageSource const&, int, bool, bool);
    virtual bool canWearArmor()const;
    virtual void getEatAnim(float);
    virtual void getMouthAnim(float);
    virtual void setReproduced(bool);
    virtual bool isBred()const;
    virtual void makeMad();
    virtual bool isUndead()const;
    virtual void getControllingPlayer()const;
    virtual void getAmbientSoundPostponeTicks();
    virtual void tameToPlayer(Player *, bool);
    virtual void setStanding(bool);
    virtual void aiStep();
    virtual bool isAdult()const;
    virtual bool isSterile()const;
    virtual void getHasReproduced()const;
    virtual bool isEating()const;
    virtual void useNewAi()const;
    virtual void nameYOffset();
    virtual void setType(int);
    virtual void onFailedTame();
    virtual bool isImmobile()const;
    virtual void getInterpolatedRidingOffset(float)const;
//  virtual void reloadHardcoded(Actor::InitializationMethod, VariantParameterList const&); //TODO: incomplete function definition
    virtual void getType()const;
    virtual void causeFallDamage(float);
    ~Horse();
    virtual bool isAmuletHorse();
    virtual std::string getMadSound();
    virtual void getClosestMommy(Actor *, float);
    virtual void _playStepSound(BlockPos const&, Block const&);
    virtual void openContainerComponent(Player &);
    virtual void setEating(bool);
    virtual void getArmorValue();
    virtual void positionRider(Actor &, float);
    virtual void handleFallDistanceOnServer(float, bool);
    virtual void getStandAnim(float)const;
    virtual void setBred(bool);
    virtual void die(ActorDamageSource const&);
    virtual void normalTick();
    virtual void feed(int);
    virtual void getShadowRadius()const;
    Horse(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
    void generateRandomMaxHealth();
    void generateRandomSpeed();
    void generateRandomJumpStrength();
    void rideableEntity();
//  void setHorseFlag(HorseFlags, bool); //TODO: incomplete function definition
    void openMouth();
    bool isHorseArmor(Item *);
    void doPlayerRide(Player *);
    bool isReadyForParenting()const;
//  void getHorseFlag(HorseFlags)const; //TODO: incomplete function definition
    void moveTail();
    void createInventory();
};
