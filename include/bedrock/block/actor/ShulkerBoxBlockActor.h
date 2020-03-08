#pragma once

#include "../../actor/Actor"
#include "../../../unmapped/DataLoadHelper"
#include "../../util/BlockPos"
#include "../../util/AABB"
#include "../unmapped/BlockSource"
#include "../../item/ItemInstance"
#include "../../nbt/CompoundTag"
#include "../../level/Level"


class ShulkerBoxBlockActor : ChestBlockActor {

public:
    static long ITEMS_SIZE;

    ShulkerBoxBlockActor::~ShulkerBoxBlockActor()
    virtual void load(Level &, CompoundTag const&, DataLoadHelper &);
    virtual void save(CompoundTag &)const;
    virtual void tick(BlockSource &);
    virtual void getUpdatePacket(BlockSource &);
    virtual void onPlace(BlockSource &);
    virtual void getName()const;
    virtual void _onUpdatePacket(CompoundTag const&, BlockSource &);
    virtual void getMaxStackSize()const;
    virtual bool canPushInItem(BlockSource &, int, int, ItemInstance const&)const;
    virtual void playOpenSound(BlockSource &);
    virtual void playCloseSound(BlockSource &);
    virtual void getObstructionAABB()const;
    virtual void _detectEntityObstruction(BlockSource &)const;

    ShulkerBoxBlockActor(BlockActorType, std::string const&, BlockActorRendererId, BlockPos const&);
    void createShulkerBoxBlockEntity(BlockPos const&);
    void getFacingDir();
    void setFacingDir(unsigned char);
    void _calculateBB();
    void _moveCollidedEntities(BlockSource &)const;
    void _calculateMovementWithCollisions(BlockSource &, Actor *)const;
    void _calculateActorMovementIntoShulker(std::vector<AABB, std::allocator<AABB>> const&, AABB const&)const;
};
