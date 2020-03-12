#pragma once

#include <vector>
#include <string>
#include "ChestBlockActor.h"


class ShulkerBoxBlockActor : ChestBlockActor {

public:
    static long ITEMS_SIZE;

    virtual std::string getName()const;
    virtual void tick(BlockSource &);
    virtual void getMaxStackSize()const;
    ~ShulkerBoxBlockActor();
    virtual void load(Level &, CompoundTag const&, DataLoadHelper &);
    virtual void playOpenSound(BlockSource &);
    virtual void playCloseSound(BlockSource &);
    virtual void getObstructionAABB()const;
    virtual bool canPushInItem(BlockSource &, int, int, ItemInstance const&)const;
    virtual void _detectEntityObstruction(BlockSource &)const;
    virtual void onPlace(BlockSource &);
    virtual void save(CompoundTag &)const;
    virtual void _onUpdatePacket(CompoundTag const&, BlockSource &);
    virtual void getUpdatePacket(BlockSource &);
    void setFacingDir(unsigned char);
    void _calculateMovementWithCollisions(BlockSource &, Actor *)const;
    void getFacingDir();
    void _calculateActorMovementIntoShulker(std::vector<AABB> const&, AABB const&)const;
    void _calculateBB();
//  ShulkerBoxBlockActor(BlockActorType, std::string const&, BlockActorRendererId, BlockPos const&); //TODO: incomplete function definition
    void _moveCollidedEntities(BlockSource &)const;
    void createShulkerBoxBlockEntity(BlockPos const&);
};
