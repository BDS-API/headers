#pragma once

#include <memory>
#include "Item.h"
#include <string>
#include "../util/BlockPos.h"


class MobPlacerItem : Item {

public:
    virtual bool isExperimental(ItemDescriptor const*)const;
    virtual bool isMultiColorTinted(ItemStack const&)const;
    virtual void setIcon(std::string const&, int);
    virtual bool isValidAuxValue(int)const;
    ~MobPlacerItem();
    virtual void getBaseColor(ItemStack const&)const;
    virtual std::string buildDescriptionId(ItemDescriptor const&, std::unique_ptr<CompoundTag> const&)const;
    virtual void tearDown();
    virtual bool isLiquidClipItem(int)const;
    virtual void dispense(BlockSource &, Container &, int, Vec3 const&, unsigned char)const;
    virtual void getIcon(ItemStackBase const&, int, bool)const;
    virtual void _useOn(ItemStack &, Actor &, BlockPos, unsigned char, float, float, float)const;
    virtual void getSecondaryColor(ItemStack const&)const;
    virtual void saveAdditionalData(ItemStackBase const&, CompoundTag &)const;
    virtual void readAdditionalData(ItemStackBase &, CompoundTag const&)const;
    void initializeIcons();
    void setActorInfoRegistry(ActorInfoRegistry *);
    void _setAgentOwner(Player &, Agent &);
    MobPlacerItem(std::string const&, int);
//  void spawnMobAt(BlockSource &, ActorType, Vec3 const&, Vec3 const&, ItemStack const&, Actor *)const; //TODO: incomplete function definition
    void spawnOrMoveAgent(Vec3 const&, Actor &);
//  void setActorResourceDefinitionGroup(ActorResourceDefinitionGroup const*); //TODO: incomplete function definition
};
