#pragma once

#include "../Actor.h"
#include <string>


class ActorDamageSource {

public:
    virtual ~ActorDamageSource();
    virtual bool isEntitySource()const;
    virtual bool isChildEntitySource()const;
    virtual bool isBlockSource()const;
    virtual void getDeathMessage(std::string, Actor *)const;
    virtual void getIsCreative()const;
    virtual void getIsWorldBuilder()const;
    virtual void getEntityUniqueID()const;
    virtual void getEntityType()const;
    virtual void getEntityCategories()const;
    virtual void getDamagingEntityIsCreative()const;
    virtual void getDamagingEntityIsWorldBuilder()const;
    virtual void getDamagingEntityUniqueID()const;
    virtual void getDamagingEntityType()const;
    virtual void getDamagingEntityCategories()const;
    virtual void clone()const;

    void lookupCause(std::string const&);
//  std::string lookupCauseName(ActorDamageCause); //TODO: incomplete function definition
    ActorDamageSource(std::string const&);
//  ActorDamageSource(ActorDamageCause); //TODO: incomplete function definition
    void getCause()const;
//  void setCause(ActorDamageCause); //TODO: incomplete function definition
};
