#pragma once

class ActorDamageByChildActorSource : ActorDamageByActorSource {

public:
    virtual ~ActorDamageByChildActorSource();
    virtual bool isChildEntitySource(void)const;
    virtual void getDeathMessage(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>, Actor *)const;
    virtual void getDamagingEntityIsCreative(void)const;
    virtual void getDamagingEntityIsWorldBuilder(void)const;
    virtual void getDamagingEntityUniqueID(void)const;
    virtual void getDamagingEntityType(void)const;
    virtual void getDamagingEntityCategories(void)const;
    virtual void clone(void)const;

    void ActorDamageByChildActorSource(Actor &, Actor &, ActorDamageCause);
    void ActorDamageByChildActorSource(BlockSource &, ActorDamageCause);
};
