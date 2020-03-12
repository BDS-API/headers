#pragma once

#include <string>


class ActorDamageSource {

public:
    ~ActorDamageSource();
    virtual void getEntityType()const;
    virtual bool isBlockSource()const;
    virtual void getDamagingEntityIsWorldBuilder()const;
    virtual bool isChildEntitySource()const;
    virtual void getDamagingEntityUniqueID()const;
    virtual void getDamagingEntityType()const;
    virtual void getDeathMessage(std::string, Actor *)const;
    virtual void getDamagingEntityIsCreative()const;
    virtual void getIsCreative()const;
    virtual void clone()const;
    virtual void getEntityCategories()const;
    virtual bool isEntitySource()const;
    virtual void getDamagingEntityCategories()const;
    virtual void getIsWorldBuilder()const;
    virtual void getEntityUniqueID()const;
//  void setCause(ActorDamageCause); //TODO: incomplete function definition
//  ActorDamageSource(ActorDamageCause); //TODO: incomplete function definition
//  std::string lookupCauseName(ActorDamageCause); //TODO: incomplete function definition
    ActorDamageSource(std::string const&);
    void getCause()const;
    void lookupCause(std::string const&);
};
