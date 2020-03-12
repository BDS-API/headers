#pragma once

#include "../../item/ItemStack.h"
#include <string>
#include "../../item/ItemInstance.h"
#include "../Actor.h"
#include "../../util/Vec3.h"
#include "../../util/BlockPos.h"
#include "../../../unmapped/HitResult.h"
#include "../damagesource/ActorDamageSource.h"


class ActorEventListener {

public:
//  virtual void onActorCarriedItemChanged(Actor &, ItemInstance const&, ItemInstance const&, HandSlot); //TODO: incomplete function definition
    virtual void onActorAttackedActor(Actor &, Actor &);
    virtual void onActorDeath(Actor &, ActorDamageSource const&);
    virtual void onActorTick(Actor &);
    virtual void onActorUseItemOn(Actor &, ItemStack const&, BlockPos const&, unsigned char);
    virtual void onActorAttack(Actor &, Actor &);
    virtual void onActorCreated(Actor &);
    virtual void onActorDroppedItem(Actor &, ItemInstance const&);
    virtual void onActorTeleported(Actor &);
//  virtual void onActorEquippedArmor(Actor &, ItemInstance const&, ArmorSlot); //TODO: incomplete function definition
    virtual void onActorRemoved(Actor &);
    virtual void onProjectileHit(Actor &, HitResult const&);
    ~ActorEventListener();
    virtual void onActorStopRiding(Actor &, bool, bool, bool);
    virtual void onActorSneakChanged(Actor &, bool);
    virtual void onActorStartRiding(Actor &, Actor &);
    virtual void onActorDefinitionEventTriggered(Actor &, std::string const&);
    virtual void onActorPlacedItem(Actor &, ItemInstance const&);
    virtual void onActorMove(Actor &, Vec3 const&);
    virtual void onActorHurt(Actor &, ActorDamageSource const&, int, int);
//  virtual void onActorAcquiredItem(Actor &, ItemInstance const&, unsigned int, ItemAcquisitionMethod, Actor *); //TODO: incomplete function definition
//  virtual void onActorUseItem(Actor &, ItemInstance const&, ItemUseMethod); //TODO: incomplete function definition
//  virtual void onActorMobInteraction(Actor &, MinecraftEventing::InteractionType, ActorType); //TODO: incomplete function definition
    ActorEventListener();
};
