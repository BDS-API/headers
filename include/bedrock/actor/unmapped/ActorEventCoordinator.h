#pragma once

#include "../Actor.h"
#include "../../util/Vec3.h"
#include "../../../unmapped/HitResult.h"
#include "../../util/BlockPos.h"
#include "../../item/ItemInstance.h"
#include "../../item/ItemStack.h"
#include "../damagesource/ActorDamageSource.h"
#include <string>


class ActorEventCoordinator {

public:

    void sendActorAttack(Actor &, Actor &);
    void sendActorHurt(Actor &, ActorDamageSource const&, int, int);
    void sendActorMove(Actor &, Vec3 const&);
    void sendActorTick(Actor &);
    void sendActorSneakChanged(Actor &, bool);
    void sendActorStartRiding(Actor &, Actor &);
    void sendActorStopRiding(Actor &, bool, bool, bool);
    void sendActorDeath(Actor &, ActorDamageSource const&);
    void sendActorDefinitionEventTriggered(Actor &, std::string const&);
    void sendActorRemoved(Actor &);
    void sendActorCreated(Actor &);
//  void sendActorUseItem(Actor &, ItemInstance const&, ItemUseMethod); //TODO: incomplete function definition
    void sendActorUseItemOn(Actor &, ItemStack const&, BlockPos const&, unsigned char);
//  void sendActorAcquiredItem(Actor &, ItemInstance const&, unsigned int, ItemAcquisitionMethod, Actor *); //TODO: incomplete function definition
    void sendActorPlacedItem(Actor &, ItemInstance const&);
    void sendActorDroppedItem(Actor &, ItemInstance const&);
//  void sendActorCarriedItemChanged(Actor &, ItemInstance const&, ItemInstance const&, HandSlot); //TODO: incomplete function definition
//  void sendActorEquippedArmor(Actor &, ItemInstance const&, ArmorSlot); //TODO: incomplete function definition
    void sendProjectileHit(Actor &, HitResult const&);
    void sendActorTeleported(Actor &);
//  void sendActorInteractedWithMob(Actor &, MinecraftEventing::InteractionType, ActorType); //TODO: incomplete function definition
    ~ActorEventCoordinator();
    ActorEventCoordinator();
};
