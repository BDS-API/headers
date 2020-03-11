#pragma once

#include "../../util/AABB.h"
#include "../../nbt/CompoundTag.h"
#include "../../actor/Actor.h"
#include "./ChestBlockActor.h"
#include <memory>
#include "../../level/Level.h"
#include "../../../unmapped/DataLoadHelper.h"
#include "../../util/BlockPos.h"
#include "../../item/ItemInstance.h"
#include <vector>
#include "../unmapped/BlockSource.h"
#include <string>


class ShulkerBoxBlockActor : ChestBlockActor {

public:
    static long ITEMS_SIZE;

    virtual ~ShulkerBoxBlockActor();
    virtual void load(Level &, CompoundTag const&, DataLoadHelper &);
    virtual void save(CompoundTag &)const;
    virtual void tick(BlockSource &);
    virtual void getUpdatePacket(BlockSource &);
    virtual void onPlace(BlockSource &);
    virtual std::string getName()const;
    virtual void _onUpdatePacket(CompoundTag const&, BlockSource &);
    virtual void getMaxStackSize()const;
    virtual bool canPushInItem(BlockSource &, int, int, ItemInstance const&)const;
    virtual void playOpenSound(BlockSource &);
    virtual void playCloseSound(BlockSource &);
    virtual void getObstructionAABB()const;
    virtual void _detectEntityObstruction(BlockSource &)const;

//  ShulkerBoxBlockActor(BlockActorType, std::string const&, BlockActorRendererId, BlockPos const&); //TODO: incomplete function definition
    void createShulkerBoxBlockEntity(BlockPos const&);
    void getFacingDir();
    void setFacingDir(unsigned char);
    void _calculateBB();
    void _moveCollidedEntities(BlockSource &)const;
    void _calculateMovementWithCollisions(BlockSource &, Actor *)const;
    void _calculateActorMovementIntoShulker(std::vector<AABB, std::allocator<AABB>> const&, AABB const&)const;
};
