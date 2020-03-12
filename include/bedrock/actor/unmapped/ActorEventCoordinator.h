#pragma once

#include "../../item/ItemStack.h"
#include <string>
#include "../../item/ItemInstance.h"
#include "../Actor.h"
#include "../../util/Vec3.h"
#include "../../util/BlockPos.h"
#include "../../../unmapped/HitResult.h"
#include "../damagesource/ActorDamageSource.h"


class ActorEventCoordinator {

public:
    void sendActorDefinitionEventTriggered(Actor &, std::string const&);
//  void sendActorInteractedWithMob(Actor &, MinecraftEventing::InteractionType, ActorType); //TODO: incomplete function definition
    ~ActorEventCoordinator();
    void sendActorSneakChanged(Actor &, bool);
//  void sendActorEquippedArmor(Actor &, ItemInstance const&, ArmorSlot); //TODO: incomplete function definition
    void sendActorDeath(Actor &, ActorDamageSource const&);
    void sendActorDroppedItem(Actor &, ItemInstance const&);
    void sendActorRemoved(Actor &);
    void sendActorCreated(Actor &);
    void sendActorTeleported(Actor &);
    void sendActorMove(Actor &, Vec3 const&);
    void sendActorUseItemOn(Actor &, ItemStack const&, BlockPos const&, unsigned char);
    ActorEventCoordinator();
    void sendActorStartRiding(Actor &, Actor &);
//  void sendActorAcquiredItem(Actor &, ItemInstance const&, unsigned int, ItemAcquisitionMethod, Actor *); //TODO: incomplete function definition
    void sendActorHurt(Actor &, ActorDamageSource const&, int, int);
    void sendProjectileHit(Actor &, HitResult const&);
//  void sendActorUseItem(Actor &, ItemInstance const&, ItemUseMethod); //TODO: incomplete function definition
    void sendActorPlacedItem(Actor &, ItemInstance const&);
//  void sendActorCarriedItemChanged(Actor &, ItemInstance const&, ItemInstance const&, HandSlot); //TODO: incomplete function definition
    void sendActorTick(Actor &);
    void sendActorAttack(Actor &, Actor &);
    void sendActorStopRiding(Actor &, bool, bool, bool);
};
