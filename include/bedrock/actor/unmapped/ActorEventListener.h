#pragma once

#include "../../util/Vec3"
#include "../../../unmapped/HitResult"
#include "../../item/ItemStack"
#include "../../util/BlockPos"
#include "../../item/ItemInstance"
#include "../damagesource/ActorDamageSource"
#include "../Actor"


class ActorEventListener {

public:
    virtual ActorEventListener::~ActorEventListener()
    virtual void onActorAttack(Actor &, Actor &);
    virtual void onActorHurt(Actor &, ActorDamageSource const&, int, int);
    virtual void onActorMove(Actor &, Vec3 const&);
    virtual void onActorTick(Actor &);
    virtual void onActorSneakChanged(Actor &, bool);
    virtual void onActorStartRiding(Actor &, Actor &);
    virtual void onActorStopRiding(Actor &, bool, bool, bool);
    virtual void onActorDeath(Actor &, ActorDamageSource const&);
    virtual void onActorDefinitionEventTriggered(Actor &, std::string const&);
    virtual void onActorUseItem(Actor &, ItemInstance const&, ItemUseMethod);
    virtual void onActorUseItemOn(Actor &, ItemStack const&, BlockPos const&, unsigned char);
    virtual void onActorCreated(Actor &);
    virtual void onProjectileHit(Actor &, HitResult const&);
    virtual void onActorTeleported(Actor &);
    virtual void onActorAttackedActor(Actor &, Actor &);
    virtual void onActorAcquiredItem(Actor &, ItemInstance const&, unsigned int, ItemAcquisitionMethod, Actor*);
    virtual void onActorPlacedItem(Actor &, ItemInstance const&);
    virtual void onActorDroppedItem(Actor &, ItemInstance const&);
    virtual void onActorCarriedItemChanged(Actor &, ItemInstance const&, ItemInstance const&, HandSlot);
    virtual void onActorEquippedArmor(Actor &, ItemInstance const&, ArmorSlot);
    virtual void onActorRemoved(Actor &);
    virtual void onActorMobInteraction(Actor &, MinecraftEventing::InteractionType, ActorType);

    ActorEventListener(void);
};
