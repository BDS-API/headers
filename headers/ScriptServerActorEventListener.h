#pragma once

class ScriptServerActorEventListener : ActorEventListener {

    virtual void ScriptServer~ScriptServerActorEventListener();
    virtual void ScriptServer~ScriptServerActorEventListener();
    virtual void ScriptServeronActorAttack(Actor &, Actor &);
    virtual void ScriptServeronActorHurt(Actor &, ActorDamageSource const&, int, int);
    virtual void ScriptServeronActorMove(Actor &, Vec3 const&);
    virtual void ScriptServeronActorTick(Actor &);
    virtual void ScriptServeronActorSneakChanged(Actor &, bool);
    virtual void ScriptServeronActorStartRiding(Actor &, Actor &);
    virtual void ScriptServeronActorStopRiding(Actor &, bool, bool, bool);
    virtual void ScriptServeronActorDeath(Actor &, ActorDamageSource const&);
    virtual void ScriptServeronActorDefinitionEventTriggered(Actor &, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    virtual void ScriptServeronActorUseItem(Actor &, ItemInstance const&, ItemUseMethod);
    virtual void onActorUseItemOn(Actor &, ItemDescriptor const&, BlockPos const&, unsigned char);
    virtual void ScriptServeronActorCreated(Actor &);
    virtual void ScriptServeronProjectileHit(Actor &, HitResult const&);
    virtual void onActorTeleported(Actor &);
    virtual void onActorAttackedActor(Actor &, Actor &);
    virtual void ScriptServeronActorAcquiredItem(Actor &, ItemInstance const&, unsigned int, ItemAcquisitionMethod, Actor*);
    virtual void onActorPlacedItem(Actor &, ItemInstance const&);
    virtual void ScriptServeronActorDroppedItem(Actor &, ItemInstance const&);
    virtual void ScriptServeronActorCarriedItemChanged(Actor &, ItemInstance const&, ItemInstance const&, HandSlot);
    virtual void ScriptServeronActorEquippedArmor(Actor &, ItemInstance const&, ArmorSlot);
    virtual void ScriptServeronActorRemoved(Actor &);
    virtual void onActorMobInteraction(Actor &, MinecraftEventing::InteractionType, ActorType);
}
