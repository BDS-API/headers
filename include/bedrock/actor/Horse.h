#pragma once

#include "../item/Item.h"
#include "Player.h"
#include "../../unmapped/VariantParameterList.h"
#include "unmapped/ActorDefinitionGroup.h"
#include "../util/BlockPos.h"
#include "Actor.h"
#include "Animal.h"
#include "unmapped/ActorDefinitionIdentifier.h"
#include "../../unmapped/Block.h"
#include "damagesource/ActorDamageSource.h"


class Horse : Animal {

public:
    static long DATA_AGE;
    static long DONKEY_CHEST_COUNT;

    virtual void positionRider(Actor &, float);
    virtual bool isAdult()const;
    virtual void causeFallDamage(float);
    virtual void _playStepSound(BlockPos const&, Block const&);
    virtual void onFailedTame();
    virtual void setEating(bool);
    virtual bool isUndead()const;
    virtual void nameYOffset();
    virtual void getAmbientSoundPostponeTicks();
    virtual void getClosestMommy(Actor *, float);
    virtual void feed(int);
    virtual void getStandAnim(float)const;
    virtual void tameToPlayer(Player *, bool);
    virtual void travel(float, float, float);
    virtual void aiStep();
    virtual void setBred(bool);
    virtual void handleFallDistanceOnServer(float, bool);
    virtual void getArmorValue();
    virtual void getControllingPlayer()const;
    virtual bool isEating()const;
    virtual bool isSterile()const;
    virtual bool isImmobile()const;
    ~Horse();
    virtual void getShadowRadius()const;
    virtual void setStanding(bool);
    virtual void makeMad();
    virtual void getHasReproduced()const;
//  virtual void reloadHardcoded(Actor::InitializationMethod, VariantParameterList const&); //TODO: incomplete function definition
    virtual void setReproduced(bool);
    virtual std::string getMadSound();
    virtual void getInterpolatedRidingOffset(float)const;
    virtual void getMouthAnim(float);
    virtual bool isBred()const;
    virtual void normalTick();
    virtual void _hurt(ActorDamageSource const&, int, bool, bool);
    virtual void setType(int);
    virtual void getType()const;
    virtual bool canWearArmor()const;
    virtual void die(ActorDamageSource const&);
    virtual bool isAmuletHorse();
    virtual void getEatAnim(float);
    virtual void openContainerComponent(Player &);
    virtual void useNewAi()const;
//  void setHorseFlag(HorseFlags, bool); //TODO: incomplete function definition
    void generateRandomJumpStrength();
    bool isReadyForParenting()const;
    void openMouth();
    void moveTail();
    void generateRandomMaxHealth();
//  void getHorseFlag(HorseFlags)const; //TODO: incomplete function definition
    void doPlayerRide(Player *);
    void generateRandomSpeed();
    void rideableEntity();
    bool isHorseArmor(Item *);
    void createInventory();
    Horse(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
};
