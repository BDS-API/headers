#pragma once

#include "../Actor.h"
#include <string>


class ActorDamageSource {

public:
    virtual void getDeathMessage(std::string, Actor *)const;
    virtual void getDamagingEntityType()const;
    virtual bool isBlockSource()const;
    virtual void getDamagingEntityIsCreative()const;
    virtual bool isEntitySource()const;
    virtual void getDamagingEntityUniqueID()const;
    virtual void getIsCreative()const;
    virtual void clone()const;
    ~ActorDamageSource();
    virtual void getEntityUniqueID()const;
    virtual void getEntityCategories()const;
    virtual void getEntityType()const;
    virtual bool isChildEntitySource()const;
    virtual void getDamagingEntityIsWorldBuilder()const;
    virtual void getIsWorldBuilder()const;
    virtual void getDamagingEntityCategories()const;
    void getCause()const;
    void lookupCause(std::string const&);
//  std::string lookupCauseName(ActorDamageCause); //TODO: incomplete function definition
//  ActorDamageSource(ActorDamageCause); //TODO: incomplete function definition
//  void setCause(ActorDamageCause); //TODO: incomplete function definition
    ActorDamageSource(std::string const&);
};
