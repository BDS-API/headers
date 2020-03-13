#pragma once

#include <string>


class ActorEventCoordinator {

public:
    void sendActorAttack(Actor &, Actor &); // _ZN21ActorEventCoordinator15sendActorAttackER5ActorS1_
    void sendActorHurt(Actor &, ActorDamageSource const&, int, int); // _ZN21ActorEventCoordinator13sendActorHurtER5ActorRK17ActorDamageSourceii
    void sendActorMove(Actor &, Vec3 const&); // _ZN21ActorEventCoordinator13sendActorMoveER5ActorRK4Vec3
    void sendActorTick(Actor &); // _ZN21ActorEventCoordinator13sendActorTickER5Actor
    void sendActorSneakChanged(Actor &, bool); // _ZN21ActorEventCoordinator21sendActorSneakChangedER5Actorb
    void sendActorStartRiding(Actor &, Actor &); // _ZN21ActorEventCoordinator20sendActorStartRidingER5ActorS1_
    void sendActorStopRiding(Actor &, bool, bool, bool); // _ZN21ActorEventCoordinator19sendActorStopRidingER5Actorbbb
    void sendActorDeath(Actor &, ActorDamageSource const&); // _ZN21ActorEventCoordinator14sendActorDeathER5ActorRK17ActorDamageSource
    void sendActorDefinitionEventTriggered(Actor &, std::string const&); // _ZN21ActorEventCoordinator33sendActorDefinitionEventTriggeredER5ActorRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    void sendActorRemoved(Actor &); // _ZN21ActorEventCoordinator16sendActorRemovedER5Actor
    void sendActorCreated(Actor &); // _ZN21ActorEventCoordinator16sendActorCreatedER5Actor
//  void sendActorUseItem(Actor &, ItemInstance const&, ItemUseMethod); //TODO: incomplete function definition // _ZN21ActorEventCoordinator16sendActorUseItemER5ActorRK12ItemInstance13ItemUseMethod
    void sendActorUseItemOn(Actor &, ItemStack const&, BlockPos const&, unsigned char); // _ZN21ActorEventCoordinator18sendActorUseItemOnER5ActorRK9ItemStackRK8BlockPosh
//  void sendActorAcquiredItem(Actor &, ItemInstance const&, unsigned int, ItemAcquisitionMethod, Actor *); //TODO: incomplete function definition // _ZN21ActorEventCoordinator21sendActorAcquiredItemER5ActorRK12ItemInstancej21ItemAcquisitionMethodPS0_
    void sendActorPlacedItem(Actor &, ItemInstance const&); // _ZN21ActorEventCoordinator19sendActorPlacedItemER5ActorRK12ItemInstance
    void sendActorDroppedItem(Actor &, ItemInstance const&); // _ZN21ActorEventCoordinator20sendActorDroppedItemER5ActorRK12ItemInstance
//  void sendActorCarriedItemChanged(Actor &, ItemInstance const&, ItemInstance const&, HandSlot); //TODO: incomplete function definition // _ZN21ActorEventCoordinator27sendActorCarriedItemChangedER5ActorRK12ItemInstanceS4_8HandSlot
//  void sendActorEquippedArmor(Actor &, ItemInstance const&, ArmorSlot); //TODO: incomplete function definition // _ZN21ActorEventCoordinator22sendActorEquippedArmorER5ActorRK12ItemInstance9ArmorSlot
    void sendProjectileHit(Actor &, HitResult const&); // _ZN21ActorEventCoordinator17sendProjectileHitER5ActorRK9HitResult
    void sendActorTeleported(Actor &); // _ZN21ActorEventCoordinator19sendActorTeleportedER5Actor
//  void sendActorInteractedWithMob(Actor &, MinecraftEventing::InteractionType, ActorType); //TODO: incomplete function definition // _ZN21ActorEventCoordinator26sendActorInteractedWithMobER5ActorN17MinecraftEventing15InteractionTypeE9ActorType
    ~ActorEventCoordinator(); // _ZN21ActorEventCoordinatorD2Ev
    ActorEventCoordinator(); // _ZN21ActorEventCoordinatorC2Ev
};
