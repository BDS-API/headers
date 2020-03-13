#pragma once

#include <string>
#include "Animal.h"


class Horse : Animal {

public:
    static long DATA_AGE;
    static long DONKEY_CHEST_COUNT;

//  virtual void reloadHardcoded(Actor::InitializationMethod, VariantParameterList const&); //TODO: incomplete function definition // _ZN5Horse15reloadHardcodedEN5Actor20InitializationMethodERK20VariantParameterList
    ~Horse(); // _ZN5HorseD2Ev
    virtual void getInterpolatedRidingOffset(float)const; // _ZNK5Horse27getInterpolatedRidingOffsetEf
    virtual void normalTick(); // _ZN5Horse10normalTickEv
    virtual void positionRider(Actor &, float); // _ZN5Horse13positionRiderER5Actorf
    virtual void getShadowRadius()const; // _ZNK5Horse15getShadowRadiusEv
    virtual bool isImmobile()const; // _ZNK5Horse10isImmobileEv
    virtual void onFailedTame(); // _ZN5Horse12onFailedTameEv
    virtual void setStanding(bool); // _ZN5Horse11setStandingEb
    virtual void feed(int); // _ZN5Horse4feedEi
    virtual void getControllingPlayer()const; // _ZNK5Horse20getControllingPlayerEv
    virtual void causeFallDamage(float); // _ZN5Horse15causeFallDamageEf
    virtual void handleFallDistanceOnServer(float, bool); // _ZN5Horse26handleFallDistanceOnServerEfb
    virtual void openContainerComponent(Player &); // _ZN5Horse22openContainerComponentER6Player
    virtual void die(ActorDamageSource const&); // _ZN5Horse3dieERK17ActorDamageSource
    virtual void _hurt(ActorDamageSource const&, int, bool, bool); // _ZN5Horse5_hurtERK17ActorDamageSourceibb
    virtual void _playStepSound(BlockPos const&, Block const&); // _ZN5Horse14_playStepSoundERK8BlockPosRK5Block
    virtual void getAmbientSoundPostponeTicks(); // _ZN5Horse28getAmbientSoundPostponeTicksEv
    virtual void travel(float, float, float); // _ZN5Horse6travelEfff
    virtual void aiStep(); // _ZN5Horse6aiStepEv
    virtual void getArmorValue(); // _ZN5Horse13getArmorValueEv
    virtual void useNewAi()const; // _ZNK5Horse8useNewAiEv
    virtual void setType(int); // _ZN5Horse7setTypeEi
    virtual void getType()const; // _ZNK5Horse7getTypeEv
    virtual void setEating(bool); // _ZN5Horse9setEatingEb
    virtual void getEatAnim(float); // _ZN5Horse10getEatAnimEf
    virtual void getStandAnim(float)const; // _ZNK5Horse12getStandAnimEf
    virtual void getMouthAnim(float); // _ZN5Horse12getMouthAnimEf
    virtual bool canWearArmor()const; // _ZNK5Horse12canWearArmorEv
    virtual void getHasReproduced()const; // _ZNK5Horse16getHasReproducedEv
    virtual void setBred(bool); // _ZN5Horse7setBredEb
    virtual void setReproduced(bool); // _ZN5Horse13setReproducedEb
    virtual bool isAmuletHorse(); // _ZN5Horse13isAmuletHorseEv
    virtual bool isUndead()const; // _ZNK5Horse8isUndeadEv
    virtual bool isSterile()const; // _ZNK5Horse9isSterileEv
    virtual bool isAdult()const; // _ZNK5Horse7isAdultEv
    virtual bool isEating()const; // _ZNK5Horse8isEatingEv
    virtual bool isBred()const; // _ZNK5Horse6isBredEv
    virtual void makeMad(); // _ZN5Horse7makeMadEv
    virtual void nameYOffset(); // _ZN5Horse11nameYOffsetEv
    virtual void tameToPlayer(Player *, bool); // _ZN5Horse12tameToPlayerEP6Playerb
    virtual void getClosestMommy(Actor *, float); // _ZN5Horse15getClosestMommyEP5Actorf
    virtual std::string getMadSound(); // _ZN5Horse11getMadSoundB5cxx11Ev
    Horse(ActorDefinitionGroup *, ActorDefinitionIdentifier const&); // _ZN5HorseC2EP20ActorDefinitionGroupRK25ActorDefinitionIdentifier
//  void getHorseFlag(HorseFlags)const; //TODO: incomplete function definition // _ZNK5Horse12getHorseFlagE10HorseFlags
//  void setHorseFlag(HorseFlags, bool); //TODO: incomplete function definition // _ZN5Horse12setHorseFlagE10HorseFlagsb
    void openMouth(); // _ZN5Horse9openMouthEv
    void createInventory(); // _ZN5Horse15createInventoryEv
    void doPlayerRide(Player *); // _ZN5Horse12doPlayerRideEP6Player
    void moveTail(); // _ZN5Horse8moveTailEv
    bool isReadyForParenting()const; // _ZNK5Horse19isReadyForParentingEv
    void rideableEntity(); // _ZN5Horse14rideableEntityEv
    void generateRandomMaxHealth(); // _ZN5Horse23generateRandomMaxHealthEv
    void generateRandomJumpStrength(); // _ZN5Horse26generateRandomJumpStrengthEv
    void generateRandomSpeed(); // _ZN5Horse19generateRandomSpeedEv
    bool isHorseArmor(Item *); // _ZN5Horse12isHorseArmorEP4Item
};
