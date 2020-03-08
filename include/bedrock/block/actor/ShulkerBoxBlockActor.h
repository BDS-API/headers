#pragma once

#include "../unmapped/BlockSource"
#include "../../actor/Actor"
#include "../../nbt/CompoundTag"
#include "../../level/Level"
#include "../../util/BlockPos"
#include "../../item/ItemInstance"
#include "../../../unmapped/DataLoadHelper"
#include "../../util/AABB"


class ShulkerBoxBlockActor : ChestBlockActor {

public:
    static long ITEMS_SIZE;

    virtual ShulkerBoxBlockActor::~ShulkerBoxBlockActor()
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
