#pragma once

#include "../../../unmapped/BlockPos"
#include "../../../unmapped/AABB"
#include "../../level/Level"
#include "../../../unmapped/BlockSource"
#include "../../nbt/CompoundTag"


class ShulkerBoxBlockActor : ChestBlockActor {

public:
    static long ITEMS_SIZE;

    virtual ShulkerBoxBlockActor::~ShulkerBoxBlockActor();
    virtual void load(Level &, CompoundTag const&, DataLoadHelper &);
    virtual void save(CompoundTag &)const;
    virtual void tick(BlockSource &);
    virtual void getUpdatePacket(BlockSource &);
    virtual void onPlace(BlockSource &);
    virtual void getName[abi:cxx11](void)const;
    virtual void _onUpdatePacket(CompoundTag const&, BlockSource &);
    virtual void getMaxStackSize(void)const;
    virtual bool canPushInItem(BlockSource &, int, int, ItemInstance const&)const;
    virtual void playOpenSound(BlockSource &);
    virtual void playCloseSound(BlockSource &);
    virtual void getObstructionAABB(void)const;
    virtual void _detectEntityObstruction(BlockSource &)const;

    ShulkerBoxBlockActor(BlockActorType, std::string const&, BlockActorRendererId, BlockPos const&);
    void createShulkerBoxBlockEntity(BlockPos const&);
    void getFacingDir(void);
    void setFacingDir(unsigned char);
    void _calculateBB(void);
    void _moveCollidedEntities(BlockSource &)const;
    void _calculateMovementWithCollisions(BlockSource &, Actor *)const;
    void _calculateActorMovementIntoShulker(std::vector<AABB, std::allocator<AABB>> const&, AABB const&)const;
};
