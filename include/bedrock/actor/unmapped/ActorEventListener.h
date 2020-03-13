#pragma once

#include <string>


class ActorEventListener {

public:
    ~ActorEventListener(); // _ZN18ActorEventListenerD2Ev
    virtual void onActorAttack(Actor &, Actor &); // _ZN18ActorEventListener13onActorAttackER5ActorS1_
    virtual void onActorHurt(Actor &, ActorDamageSource const&, int, int); // _ZN18ActorEventListener11onActorHurtER5ActorRK17ActorDamageSourceii
    virtual void onActorMove(Actor &, Vec3 const&); // _ZN18ActorEventListener11onActorMoveER5ActorRK4Vec3
    virtual void onActorTick(Actor &); // _ZN18ActorEventListener11onActorTickER5Actor
    virtual void onActorSneakChanged(Actor &, bool); // _ZN18ActorEventListener19onActorSneakChangedER5Actorb
    virtual void onActorStartRiding(Actor &, Actor &); // _ZN18ActorEventListener18onActorStartRidingER5ActorS1_
    virtual void onActorStopRiding(Actor &, bool, bool, bool); // _ZN18ActorEventListener17onActorStopRidingER5Actorbbb
    virtual void onActorDeath(Actor &, ActorDamageSource const&); // _ZN18ActorEventListener12onActorDeathER5ActorRK17ActorDamageSource
    virtual void onActorDefinitionEventTriggered(Actor &, std::string const&); // _ZN18ActorEventListener31onActorDefinitionEventTriggeredER5ActorRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
//  virtual void onActorUseItem(Actor &, ItemInstance const&, ItemUseMethod); //TODO: incomplete function definition // _ZN18ActorEventListener14onActorUseItemER5ActorRK12ItemInstance13ItemUseMethod
    virtual void onActorUseItemOn(Actor &, ItemStack const&, BlockPos const&, unsigned char); // _ZN18ActorEventListener16onActorUseItemOnER5ActorRK9ItemStackRK8BlockPosh
    virtual void onActorCreated(Actor &); // _ZN18ActorEventListener14onActorCreatedER5Actor
    virtual void onProjectileHit(Actor &, HitResult const&); // _ZN18ActorEventListener15onProjectileHitER5ActorRK9HitResult
    virtual void onActorTeleported(Actor &); // _ZN18ActorEventListener17onActorTeleportedER5Actor
    virtual void onActorAttackedActor(Actor &, Actor &); // _ZN18ActorEventListener20onActorAttackedActorER5ActorS1_
//  virtual void onActorAcquiredItem(Actor &, ItemInstance const&, unsigned int, ItemAcquisitionMethod, Actor *); //TODO: incomplete function definition // _ZN18ActorEventListener19onActorAcquiredItemER5ActorRK12ItemInstancej21ItemAcquisitionMethodPS0_
    virtual void onActorPlacedItem(Actor &, ItemInstance const&); // _ZN18ActorEventListener17onActorPlacedItemER5ActorRK12ItemInstance
    virtual void onActorDroppedItem(Actor &, ItemInstance const&); // _ZN18ActorEventListener18onActorDroppedItemER5ActorRK12ItemInstance
//  virtual void onActorCarriedItemChanged(Actor &, ItemInstance const&, ItemInstance const&, HandSlot); //TODO: incomplete function definition // _ZN18ActorEventListener25onActorCarriedItemChangedER5ActorRK12ItemInstanceS4_8HandSlot
//  virtual void onActorEquippedArmor(Actor &, ItemInstance const&, ArmorSlot); //TODO: incomplete function definition // _ZN18ActorEventListener20onActorEquippedArmorER5ActorRK12ItemInstance9ArmorSlot
    virtual void onActorRemoved(Actor &); // _ZN18ActorEventListener14onActorRemovedER5Actor
//  virtual void onActorMobInteraction(Actor &, MinecraftEventing::InteractionType, ActorType); //TODO: incomplete function definition // _ZN18ActorEventListener21onActorMobInteractionER5ActorN17MinecraftEventing15InteractionTypeE9ActorType
    ActorEventListener(); // _ZN18ActorEventListenerC2Ev
};
