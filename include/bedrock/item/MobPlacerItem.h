#pragma once

#include <string>
#include <memory>
#include "../util/BlockPos.h"
#include "Item.h"


class MobPlacerItem : Item {

public:
    ~MobPlacerItem(); // _ZN13MobPlacerItemD2Ev
    virtual void tearDown(); // _ZN13MobPlacerItem8tearDownEv
    virtual bool isExperimental(ItemDescriptor const*)const; // _ZNK13MobPlacerItem14isExperimentalEPK14ItemDescriptor
    virtual bool isLiquidClipItem(int)const; // _ZNK13MobPlacerItem16isLiquidClipItemEi
    virtual bool isValidAuxValue(int)const; // _ZNK13MobPlacerItem15isValidAuxValueEi
    virtual bool isMultiColorTinted(ItemStack const&)const; // _ZNK13MobPlacerItem18isMultiColorTintedERK9ItemStack
    virtual void getBaseColor(ItemStack const&)const; // _ZNK13MobPlacerItem12getBaseColorERK9ItemStack
    virtual void getSecondaryColor(ItemStack const&)const; // _ZNK13MobPlacerItem17getSecondaryColorERK9ItemStack
    virtual void saveAdditionalData(ItemStackBase const&, CompoundTag &)const; // _ZNK13MobPlacerItem18saveAdditionalDataERK13ItemStackBaseR11CompoundTag
    virtual void readAdditionalData(ItemStackBase &, CompoundTag const&)const; // _ZNK13MobPlacerItem18readAdditionalDataER13ItemStackBaseRK11CompoundTag
    virtual void dispense(BlockSource &, Container &, int, Vec3 const&, unsigned char)const; // _ZNK13MobPlacerItem8dispenseER11BlockSourceR9ContaineriRK4Vec3h
    virtual std::string buildDescriptionId(ItemDescriptor const&, std::unique_ptr<CompoundTag> const&)const; // _ZNK13MobPlacerItem18buildDescriptionIdB5cxx11ERK14ItemDescriptorRKSt10unique_ptrI11CompoundTagSt14default_deleteIS4_EE
    virtual void getIcon(ItemStackBase const&, int, bool)const; // _ZNK13MobPlacerItem7getIconERK13ItemStackBaseib
    virtual void setIcon(std::string const&, int); // _ZN13MobPlacerItem7setIconERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEi
    virtual void _useOn(ItemStack &, Actor &, BlockPos, unsigned char, float, float, float)const; // _ZNK13MobPlacerItem6_useOnER9ItemStackR5Actor8BlockPoshfff
    MobPlacerItem(std::string const&, int); // _ZN13MobPlacerItemC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEi
    void initializeIcons(); // _ZN13MobPlacerItem15initializeIconsEv
    void setActorInfoRegistry(ActorInfoRegistry *); // _ZN13MobPlacerItem20setActorInfoRegistryEP17ActorInfoRegistry
//  void setActorResourceDefinitionGroup(ActorResourceDefinitionGroup const*); //TODO: incomplete function definition // _ZN13MobPlacerItem31setActorResourceDefinitionGroupEPK28ActorResourceDefinitionGroup
//  void spawnMobAt(BlockSource &, ActorType, Vec3 const&, Vec3 const&, ItemStack const&, Actor *)const; //TODO: incomplete function definition // _ZNK13MobPlacerItem10spawnMobAtER11BlockSource9ActorTypeRK4Vec3S5_RK9ItemStackP5Actor
    void spawnOrMoveAgent(Vec3 const&, Actor &); // _ZN13MobPlacerItem16spawnOrMoveAgentERK4Vec3R5Actor
    void _setAgentOwner(Player &, Agent &); // _ZN13MobPlacerItem14_setAgentOwnerER6PlayerR5Agent
};
