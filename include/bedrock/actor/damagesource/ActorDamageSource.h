#pragma once

#include "../Actor"


class ActorDamageSource {

public:
    virtual ActorDamageSource::~ActorDamageSource();
    virtual bool isEntitySource(void)const;
    virtual bool isChildEntitySource(void)const;
    virtual bool isBlockSource(void)const;
    virtual void getDeathMessage(std::string, Actor *)const;
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

    void lookupCause(std::string const&);
    ActorDamageSource(std::string const&);
    ActorDamageSource(ActorDamageCause);
    void getCause(void)const;
    void setCause(ActorDamageCause);
};
