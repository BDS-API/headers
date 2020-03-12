#pragma once

#include <string>


class ActorEventListener {

public:
    virtual void onActorDefinitionEventTriggered(Actor &, std::string const&);
    virtual void onActorTick(Actor &);
    virtual void onActorPlacedItem(Actor &, ItemInstance const&);
    virtual void onActorAttackedActor(Actor &, Actor &);
    ~ActorEventListener();
    virtual void onActorSneakChanged(Actor &, bool);
//  virtual void onActorUseItem(Actor &, ItemInstance const&, ItemUseMethod); //TODO: incomplete function definition
    virtual void onActorStartRiding(Actor &, Actor &);
//  virtual void onActorCarriedItemChanged(Actor &, ItemInstance const&, ItemInstance const&, HandSlot); //TODO: incomplete function definition
    virtual void onActorMove(Actor &, Vec3 const&);
//  virtual void onActorMobInteraction(Actor &, MinecraftEventing::InteractionType, ActorType); //TODO: incomplete function definition
    virtual void onActorDroppedItem(Actor &, ItemInstance const&);
    virtual void onActorAttack(Actor &, Actor &);
    virtual void onActorStopRiding(Actor &, bool, bool, bool);
//  virtual void onActorAcquiredItem(Actor &, ItemInstance const&, unsigned int, ItemAcquisitionMethod, Actor *); //TODO: incomplete function definition
//  virtual void onActorEquippedArmor(Actor &, ItemInstance const&, ArmorSlot); //TODO: incomplete function definition
    virtual void onActorDeath(Actor &, ActorDamageSource const&);
    virtual void onActorHurt(Actor &, ActorDamageSource const&, int, int);
    virtual void onActorTeleported(Actor &);
    virtual void onActorRemoved(Actor &);
    virtual void onActorCreated(Actor &);
    virtual void onProjectileHit(Actor &, HitResult const&);
    virtual void onActorUseItemOn(Actor &, ItemStack const&, BlockPos const&, unsigned char);
    ActorEventListener();
};
