#pragma once

#include <string>
#include "../../actor/unmapped/ActorEventListener.h"


class ScriptServerActorEventListener : ActorEventListener {

public:
//  virtual void onActorAcquiredItem(Actor &, ItemInstance const&, unsigned int, ItemAcquisitionMethod, Actor *); //TODO: incomplete function definition
//  virtual void onActorUseItem(Actor &, ItemInstance const&, ItemUseMethod); //TODO: incomplete function definition
    virtual void onActorStartRiding(Actor &, Actor &);
    virtual void onActorDroppedItem(Actor &, ItemInstance const&);
    virtual void onActorCreated(Actor &);
    virtual void onActorTick(Actor &);
    virtual void onProjectileHit(Actor &, HitResult const&);
//  virtual void onActorEquippedArmor(Actor &, ItemInstance const&, ArmorSlot); //TODO: incomplete function definition
    virtual void onActorStopRiding(Actor &, bool, bool, bool);
    virtual void onActorDeath(Actor &, ActorDamageSource const&);
    virtual void onActorAttack(Actor &, Actor &);
//  virtual void onActorCarriedItemChanged(Actor &, ItemInstance const&, ItemInstance const&, HandSlot); //TODO: incomplete function definition
    virtual void onActorRemoved(Actor &);
    virtual void onActorSneakChanged(Actor &, bool);
    virtual void onActorDefinitionEventTriggered(Actor &, std::string const&);
    virtual void onActorMove(Actor &, Vec3 const&);
    virtual void onActorHurt(Actor &, ActorDamageSource const&, int, int);
    ~ScriptServerActorEventListener();
    ScriptServerActorEventListener(MinecraftServerScriptEngine &);
};
