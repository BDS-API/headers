#pragma once

#include "../Actor.h"
#include "../../util/Vec3.h"
#include "../../../unmapped/HitResult.h"
#include "../../util/BlockPos.h"
#include "../../item/ItemInstance.h"
#include "../../item/ItemStack.h"
#include "../damagesource/ActorDamageSource.h"
#include <string>


class ActorEventListener {

public:
    virtual ~ActorEventListener();
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
    virtual void onActorUseItemOn(Actor &, ItemStack const&, BlockPos const&, unsigned char);
    virtual void onActorCreated(Actor &);
    virtual void onProjectileHit(Actor &, HitResult const&);
    virtual void onActorTeleported(Actor &);
    virtual void onActorAttackedActor(Actor &, Actor &);
//  virtual void onActorAcquiredItem(Actor &, ItemInstance const&, unsigned int, ItemAcquisitionMethod, Actor *); //TODO: incomplete function definition
    virtual void onActorPlacedItem(Actor &, ItemInstance const&);
    virtual void onActorDroppedItem(Actor &, ItemInstance const&);
//  virtual void onActorCarriedItemChanged(Actor &, ItemInstance const&, ItemInstance const&, HandSlot); //TODO: incomplete function definition
//  virtual void onActorEquippedArmor(Actor &, ItemInstance const&, ArmorSlot); //TODO: incomplete function definition
    virtual void onActorRemoved(Actor &);
//  virtual void onActorMobInteraction(Actor &, MinecraftEventing::InteractionType, ActorType); //TODO: incomplete function definition

    ActorEventListener();
};
