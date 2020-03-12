#pragma once

#include <string>
#include "../../item/ItemInstance.h"
#include "../../../unmapped/MinecraftServerScriptEngine.h"
#include "../../util/Vec3.h"
#include "../../actor/unmapped/ActorEventListener.h"
#include "../../actor/Actor.h"
#include "../../../unmapped/HitResult.h"
#include "../../actor/damagesource/ActorDamageSource.h"


class ScriptServerActorEventListener : ActorEventListener {

public:
    ~ScriptServerActorEventListener();
    virtual void onActorDeath(Actor &, ActorDamageSource const&);
//  virtual void onActorCarriedItemChanged(Actor &, ItemInstance const&, ItemInstance const&, HandSlot); //TODO: incomplete function definition
    virtual void onActorCreated(Actor &);
//  virtual void onActorUseItem(Actor &, ItemInstance const&, ItemUseMethod); //TODO: incomplete function definition
    virtual void onActorRemoved(Actor &);
    virtual void onActorTick(Actor &);
//  virtual void onActorAcquiredItem(Actor &, ItemInstance const&, unsigned int, ItemAcquisitionMethod, Actor *); //TODO: incomplete function definition
//  virtual void onActorEquippedArmor(Actor &, ItemInstance const&, ArmorSlot); //TODO: incomplete function definition
    virtual void onActorStopRiding(Actor &, bool, bool, bool);
    virtual void onActorDroppedItem(Actor &, ItemInstance const&);
    virtual void onActorAttack(Actor &, Actor &);
    virtual void onActorMove(Actor &, Vec3 const&);
    virtual void onActorSneakChanged(Actor &, bool);
    virtual void onActorStartRiding(Actor &, Actor &);
    virtual void onActorDefinitionEventTriggered(Actor &, std::string const&);
    virtual void onActorHurt(Actor &, ActorDamageSource const&, int, int);
    virtual void onProjectileHit(Actor &, HitResult const&);
    ScriptServerActorEventListener(MinecraftServerScriptEngine &);
};
