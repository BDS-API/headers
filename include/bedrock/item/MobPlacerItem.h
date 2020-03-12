#pragma once

#include "../util/BlockPos.h"
#include "ItemStack.h"
#include <string>
#include "../actor/Actor.h"
#include "../actor/Agent.h"
#include "../util/Vec3.h"
#include "../nbt/CompoundTag.h"
#include "../actor/Player.h"
#include "../container/Container.h"
#include <memory>
#include "Item.h"
#include "ItemStackBase.h"
#include "unmapped/ItemDescriptor.h"
#include "../block/unmapped/BlockSource.h"
#include "../actor/unmapped/ActorInfoRegistry.h"


class MobPlacerItem : Item {

public:
    virtual std::string buildDescriptionId(ItemDescriptor const&, std::unique_ptr<CompoundTag> const&)const;
    ~MobPlacerItem();
    virtual bool isExperimental(ItemDescriptor const*)const;
    virtual void _useOn(ItemStack &, Actor &, BlockPos, unsigned char, float, float, float)const;
    virtual void getBaseColor(ItemStack const&)const;
    virtual void getSecondaryColor(ItemStack const&)const;
    virtual void readAdditionalData(ItemStackBase &, CompoundTag const&)const;
    virtual void tearDown();
    virtual bool isMultiColorTinted(ItemStack const&)const;
    virtual bool isValidAuxValue(int)const;
    virtual void saveAdditionalData(ItemStackBase const&, CompoundTag &)const;
    virtual bool isLiquidClipItem(int)const;
    virtual void dispense(BlockSource &, Container &, int, Vec3 const&, unsigned char)const;
    virtual void setIcon(std::string const&, int);
    virtual void getIcon(ItemStackBase const&, int, bool)const;
//  void setActorResourceDefinitionGroup(ActorResourceDefinitionGroup const*); //TODO: incomplete function definition
//  void spawnMobAt(BlockSource &, ActorType, Vec3 const&, Vec3 const&, ItemStack const&, Actor *)const; //TODO: incomplete function definition
    void setActorInfoRegistry(ActorInfoRegistry *);
    void spawnOrMoveAgent(Vec3 const&, Actor &);
    void initializeIcons();
    MobPlacerItem(std::string const&, int);
    void _setAgentOwner(Player &, Agent &);
};
