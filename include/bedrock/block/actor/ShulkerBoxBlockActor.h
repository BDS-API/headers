#pragma once

#include "../../util/AABB.h"
#include <string>
#include "../../item/ItemInstance.h"
#include "../../../unmapped/DataLoadHelper.h"
#include "ChestBlockActor.h"
#include "../../level/Level.h"
#include "../../nbt/CompoundTag.h"
#include "../unmapped/BlockSource.h"
#include "../../actor/Actor.h"
#include <vector>
#include "../../util/BlockPos.h"


class ShulkerBoxBlockActor : ChestBlockActor {

public:
    static long ITEMS_SIZE;

    ~ShulkerBoxBlockActor();
    virtual void getMaxStackSize()const;
    virtual void playCloseSound(BlockSource &);
    virtual void save(CompoundTag &)const;
    virtual void _detectEntityObstruction(BlockSource &)const;
    virtual bool canPushInItem(BlockSource &, int, int, ItemInstance const&)const;
    virtual void tick(BlockSource &);
    virtual void getObstructionAABB()const;
    virtual void onPlace(BlockSource &);
    virtual void getUpdatePacket(BlockSource &);
    virtual void _onUpdatePacket(CompoundTag const&, BlockSource &);
    virtual void playOpenSound(BlockSource &);
    virtual std::string getName()const;
    virtual void load(Level &, CompoundTag const&, DataLoadHelper &);
    void setFacingDir(unsigned char);
    void _calculateMovementWithCollisions(BlockSource &, Actor *)const;
    void _moveCollidedEntities(BlockSource &)const;
    void _calculateActorMovementIntoShulker(std::vector<AABB> const&, AABB const&)const;
    void getFacingDir();
//  ShulkerBoxBlockActor(BlockActorType, std::string const&, BlockActorRendererId, BlockPos const&); //TODO: incomplete function definition
    void _calculateBB();
    void createShulkerBoxBlockEntity(BlockPos const&);
};
