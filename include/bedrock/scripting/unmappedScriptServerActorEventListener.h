#pragma once

#include "../../actor/Actor.h"
#include "../../util/Vec3.h"
#include "../../../unmapped/HitResult.h"
#include "../../item/ItemInstance.h"
#include "../../actor/unmapped/ActorEventListener.h"
#include "../../actor/damagesource/ActorDamageSource.h"
#include "../../../unmapped/MinecraftServerScriptEngine.h"
#include <string>


class ScriptServerActorEventListener : ActorEventListener {

public:
    virtual ~ScriptServerActorEventListener();
    virtual void onActorAttack(Actor &, Actor &);
    virtual void onActorHurt(Actor &, ActorDamageSource const&, int, int);
    virtual void onActorMove(Actor &, Vec3 const&);
    virtual void onActorTick(Actor &);
    virtual void onActorSneakChanged(Actor &, bool);
    virtual void onActorStartRiding(Actor &, Actor &);
    virtual void onActorStopRiding(Actor &, bool, bool, bool);
    virtual void onActorDeath(Actor &, ActorDamageSource const&);
    virtual void onActorDefinitionEventTriggered(Actor &, std::string const&);
//  virtual void onActorUseItem(Actor &, ItemInstance const&, ItemUseMethod); //TODO: incomplete function definition
    virtual void onActorCreated(Actor &);
    virtual void onProjectileHit(Actor &, HitResult const&);
//  virtual void onActorAcquiredItem(Actor &, ItemInstance const&, unsigned int, ItemAcquisitionMethod, Actor *); //TODO: incomplete function definition
    virtual void onActorDroppedItem(Actor &, ItemInstance const&);
//  virtual void onActorCarriedItemChanged(Actor &, ItemInstance const&, ItemInstance const&, HandSlot); //TODO: incomplete function definition
//  virtual void onActorEquippedArmor(Actor &, ItemInstance const&, ArmorSlot); //TODO: incomplete function definition
    virtual void onActorRemoved(Actor &);

    ScriptServerActorEventListener(MinecraftServerScriptEngine &);
};
