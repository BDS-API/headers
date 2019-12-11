#pragma once

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
    void sendActorDefinitionEventTriggered(Actor &, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    void sendActorRemoved(Actor &);
    void sendActorCreated(Actor &);
    void sendActorUseItem(Actor &, ItemInstance const&, ItemUseMethod);
    void sendActorUseItemOn(Actor &, ItemStack const&, BlockPos const&, unsigned char);
    void sendActorAcquiredItem(Actor &, ItemInstance const&, unsigned int, ItemAcquisitionMethod, Actor*);
    void sendActorPlacedItem(Actor &, ItemInstance const&);
    void sendActorDroppedItem(Actor &, ItemInstance const&);
    void sendActorCarriedItemChanged(Actor &, ItemInstance const&, ItemInstance const&, HandSlot);
    void sendActorEquippedArmor(Actor &, ItemInstance const&, ArmorSlot);
    void sendProjectileHit(Actor &, HitResult const&);
    void sendActorTeleported(Actor &);
    void sendActorInteractedWithMob(Actor &, MinecraftEventing::InteractionType, ActorType);
    void ActorEventCoordinator(void);
};
