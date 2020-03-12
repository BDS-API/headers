#pragma once

#include <string>


class ActorEventCoordinator {

public:
    void sendActorDeath(Actor &, ActorDamageSource const&);
    void sendActorAttack(Actor &, Actor &);
    void sendActorCreated(Actor &);
//  void sendActorUseItem(Actor &, ItemInstance const&, ItemUseMethod); //TODO: incomplete function definition
    void sendActorHurt(Actor &, ActorDamageSource const&, int, int);
    void sendActorSneakChanged(Actor &, bool);
    void sendActorStartRiding(Actor &, Actor &);
    void sendProjectileHit(Actor &, HitResult const&);
    void sendActorPlacedItem(Actor &, ItemInstance const&);
//  void sendActorEquippedArmor(Actor &, ItemInstance const&, ArmorSlot); //TODO: incomplete function definition
//  void sendActorInteractedWithMob(Actor &, MinecraftEventing::InteractionType, ActorType); //TODO: incomplete function definition
    void sendActorDefinitionEventTriggered(Actor &, std::string const&);
    ActorEventCoordinator();
    ~ActorEventCoordinator();
    void sendActorTick(Actor &);
    void sendActorTeleported(Actor &);
    void sendActorRemoved(Actor &);
    void sendActorStopRiding(Actor &, bool, bool, bool);
//  void sendActorAcquiredItem(Actor &, ItemInstance const&, unsigned int, ItemAcquisitionMethod, Actor *); //TODO: incomplete function definition
    void sendActorUseItemOn(Actor &, ItemStack const&, BlockPos const&, unsigned char);
    void sendActorDroppedItem(Actor &, ItemInstance const&);
    void sendActorMove(Actor &, Vec3 const&);
//  void sendActorCarriedItemChanged(Actor &, ItemInstance const&, ItemInstance const&, HandSlot); //TODO: incomplete function definition
};
