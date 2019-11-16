#pragma once

class RemovedActorDamageByType : ActorDamageSource {

    virtual ~RemovedActorDamageByType();
    virtual ~RemovedActorDamageByType();
    virtual void isEntitySource(void)const;
    virtual void isChildEntitySource(void)const;
    virtual void isBlockSource(void)const;
    virtual void getDeathMessage(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>, Actor *)const;
    virtual void getIsCreative(void)const;
    virtual void getIsWorldBuilder(void)const;
    virtual void getEntityUniqueID(void)const;
    virtual void getEntityType(void)const;
    virtual void getEntityCategories(void)const;
    virtual void getDamagingEntityIsCreative(void)const;
    virtual void getDamagingEntityIsWorldBuilder(void)const;
    virtual void getDamagingEntityUniqueID(void)const;
    virtual void getDamagingEntityType(void)const;
    virtual void getDamagingEntityCategories(void)const;
    virtual void clone(void)const;
}
