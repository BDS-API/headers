#pragma once

#include "../actor/Agent"
#include "../util/Vec3"
#include "../nbt/CompoundTag"
#include "../actor/Player"
#include "../container/Container"
#include "../block/unmapped/BlockSource"
#include "../actor/unmapped/ActorInfoRegistry"
#include "../util/BlockPos"
#include "../actor/Actor"
#include "unmapped/ItemDescriptor"


class MobPlacerItem : Item {

public:
    virtual MobPlacerItem::~MobPlacerItem()
    virtual void tearDown();
    virtual bool isExperimental(ItemDescriptor const*)const;
    virtual bool isLiquidClipItem(int)const;
    virtual bool isValidAuxValue(int)const;
    virtual bool isMultiColorTinted(ItemStack const&)const;
    virtual void getBaseColor(ItemStack const&)const;
    virtual void getSecondaryColor(ItemStack const&)const;
    virtual void saveAdditionalData(ItemStackBase const&, CompoundTag &)const;
    virtual void readAdditionalData(ItemStackBase &, CompoundTag const&)const;
    virtual void dispense(BlockSource &, Container &, int, Vec3 const&, unsigned char)const;
    virtual void buildDescriptionId(ItemDescriptor const&, std::unique_ptr<CompoundTag, std::default_delete<CompoundTag>> const&)const;
    virtual void getIcon(ItemStackBase const&, int, bool)const;
    virtual void setIcon(std::string const&, int);
    virtual void _useOn(ItemStack &, Actor &, BlockPos, unsigned char, float, float, float)const;

    MobPlacerItem(std::string const&, int);
    void initializeIcons();
    void setActorInfoRegistry(ActorInfoRegistry *);
    void setActorResourceDefinitionGroup(ActorResourceDefinitionGroup const*);
    void spawnMobAt(BlockSource &, ActorType, Vec3 const&, Vec3 const&, ItemStack const&, Actor *)const;
    void spawnOrMoveAgent(Vec3 const&, Actor &);
    void _setAgentOwner(Player &, Agent &);
};
