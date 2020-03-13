#pragma once

#include <string>


class ActorDamageSource {

public:
    ~ActorDamageSource(); // _ZN17ActorDamageSourceD2Ev
    virtual bool isEntitySource()const; // _ZNK17ActorDamageSource14isEntitySourceEv
    virtual bool isChildEntitySource()const; // _ZNK17ActorDamageSource19isChildEntitySourceEv
    virtual bool isBlockSource()const; // _ZNK17ActorDamageSource13isBlockSourceEv
    virtual void getDeathMessage(std::string, Actor *)const; // _ZNK17ActorDamageSource15getDeathMessageENSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEP5Actor
    virtual void getIsCreative()const; // _ZNK17ActorDamageSource13getIsCreativeEv
    virtual void getIsWorldBuilder()const; // _ZNK17ActorDamageSource17getIsWorldBuilderEv
    virtual void getEntityUniqueID()const; // _ZNK17ActorDamageSource17getEntityUniqueIDEv
    virtual void getEntityType()const; // _ZNK17ActorDamageSource13getEntityTypeEv
    virtual void getEntityCategories()const; // _ZNK17ActorDamageSource19getEntityCategoriesEv
    virtual void getDamagingEntityIsCreative()const; // _ZNK17ActorDamageSource27getDamagingEntityIsCreativeEv
    virtual void getDamagingEntityIsWorldBuilder()const; // _ZNK17ActorDamageSource31getDamagingEntityIsWorldBuilderEv
    virtual void getDamagingEntityUniqueID()const; // _ZNK17ActorDamageSource25getDamagingEntityUniqueIDEv
    virtual void getDamagingEntityType()const; // _ZNK17ActorDamageSource21getDamagingEntityTypeEv
    virtual void getDamagingEntityCategories()const; // _ZNK17ActorDamageSource27getDamagingEntityCategoriesEv
    virtual void clone()const; // _ZNK17ActorDamageSource5cloneEv
    void lookupCause(std::string const&); // _ZN17ActorDamageSource11lookupCauseERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
//  std::string lookupCauseName(ActorDamageCause); //TODO: incomplete function definition // _ZN17ActorDamageSource15lookupCauseNameB5cxx11E16ActorDamageCause
    ActorDamageSource(std::string const&); // _ZN17ActorDamageSourceC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
//  ActorDamageSource(ActorDamageCause); //TODO: incomplete function definition // _ZN17ActorDamageSourceC2E16ActorDamageCause
    void getCause()const; // _ZNK17ActorDamageSource8getCauseEv
//  void setCause(ActorDamageCause); //TODO: incomplete function definition // _ZN17ActorDamageSource8setCauseE16ActorDamageCause
};
