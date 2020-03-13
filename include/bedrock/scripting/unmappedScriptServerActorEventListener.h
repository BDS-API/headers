#pragma once

#include <string>
#include "../../actor/unmapped/ActorEventListener.h"


class ScriptServerActorEventListener : ActorEventListener {

public:
    ~ScriptServerActorEventListener(); // _ZN30ScriptServerActorEventListenerD2Ev
    virtual void onActorAttack(Actor &, Actor &); // _ZN30ScriptServerActorEventListener13onActorAttackER5ActorS1_
    virtual void onActorHurt(Actor &, ActorDamageSource const&, int, int); // _ZN30ScriptServerActorEventListener11onActorHurtER5ActorRK17ActorDamageSourceii
    virtual void onActorMove(Actor &, Vec3 const&); // _ZN30ScriptServerActorEventListener11onActorMoveER5ActorRK4Vec3
    virtual void onActorTick(Actor &); // _ZN30ScriptServerActorEventListener11onActorTickER5Actor
    virtual void onActorSneakChanged(Actor &, bool); // _ZN30ScriptServerActorEventListener19onActorSneakChangedER5Actorb
    virtual void onActorStartRiding(Actor &, Actor &); // _ZN30ScriptServerActorEventListener18onActorStartRidingER5ActorS1_
    virtual void onActorStopRiding(Actor &, bool, bool, bool); // _ZN30ScriptServerActorEventListener17onActorStopRidingER5Actorbbb
    virtual void onActorDeath(Actor &, ActorDamageSource const&); // _ZN30ScriptServerActorEventListener12onActorDeathER5ActorRK17ActorDamageSource
    virtual void onActorDefinitionEventTriggered(Actor &, std::string const&); // _ZN30ScriptServerActorEventListener31onActorDefinitionEventTriggeredER5ActorRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
//  virtual void onActorUseItem(Actor &, ItemInstance const&, ItemUseMethod); //TODO: incomplete function definition // _ZN30ScriptServerActorEventListener14onActorUseItemER5ActorRK12ItemInstance13ItemUseMethod
    virtual void onActorCreated(Actor &); // _ZN30ScriptServerActorEventListener14onActorCreatedER5Actor
    virtual void onProjectileHit(Actor &, HitResult const&); // _ZN30ScriptServerActorEventListener15onProjectileHitER5ActorRK9HitResult
//  virtual void onActorAcquiredItem(Actor &, ItemInstance const&, unsigned int, ItemAcquisitionMethod, Actor *); //TODO: incomplete function definition // _ZN30ScriptServerActorEventListener19onActorAcquiredItemER5ActorRK12ItemInstancej21ItemAcquisitionMethodPS0_
    virtual void onActorDroppedItem(Actor &, ItemInstance const&); // _ZN30ScriptServerActorEventListener18onActorDroppedItemER5ActorRK12ItemInstance
//  virtual void onActorCarriedItemChanged(Actor &, ItemInstance const&, ItemInstance const&, HandSlot); //TODO: incomplete function definition // _ZN30ScriptServerActorEventListener25onActorCarriedItemChangedER5ActorRK12ItemInstanceS4_8HandSlot
//  virtual void onActorEquippedArmor(Actor &, ItemInstance const&, ArmorSlot); //TODO: incomplete function definition // _ZN30ScriptServerActorEventListener20onActorEquippedArmorER5ActorRK12ItemInstance9ArmorSlot
    virtual void onActorRemoved(Actor &); // _ZN30ScriptServerActorEventListener14onActorRemovedER5Actor
    ScriptServerActorEventListener(MinecraftServerScriptEngine &); // _ZN30ScriptServerActorEventListenerC2ER27MinecraftServerScriptEngine
};
