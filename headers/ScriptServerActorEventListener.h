#pragma once

class ScriptServerActorEventListener : ActorEventListener {

public:
    virtual ~ScriptServerActorEventListener();
    virtual void onActorAttack(Actor &, Actor &);
    virtual void onActorHurt(Actor &, ActorDamageSource const&, int, int);
    virtual void onActorMove(Actor &, Vec3 const&);
    virtual void onActorTick(Actor &);
    virtual void onActorSneakChanged(Actor &, bool);
    virtual void onActorStartRiding(Actor &, Actor &);
    virtual void onActorStopRiding(Actor &, bool, bool, bool);
    virtual void onActorDeath(Actor &, ActorDamageSource const&);
    virtual void onActorDefinitionEventTriggered(Actor &, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    virtual void onActorUseItem(Actor &, ItemInstance const&, ItemUseMethod);
    virtual void onActorCreated(Actor &);
    virtual void onProjectileHit(Actor &, HitResult const&);
    virtual void onActorAcquiredItem(Actor &, ItemInstance const&, unsigned int, ItemAcquisitionMethod, Actor*);
    virtual void onActorDroppedItem(Actor &, ItemInstance const&);
    virtual void onActorCarriedItemChanged(Actor &, ItemInstance const&, ItemInstance const&, HandSlot);
    virtual void onActorEquippedArmor(Actor &, ItemInstance const&, ArmorSlot);
    virtual void onActorRemoved(Actor &);

    void ScriptServerActorEventListener(MinecraftServerScriptEngine &);
};
