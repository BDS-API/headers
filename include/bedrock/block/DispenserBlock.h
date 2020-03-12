#pragma once

#include "../util/BlockPos.h"
#include "unmapped/BlockSource.h"
#include "../util/Random.h"
#include <string>
#include "../actor/Actor.h"
#include "ActorBlock.h"
#include "../util/Vec3.h"
#include "../../unmapped/Block.h"
#include "../container/Container.h"
#include "../actor/Player.h"
#include "../item/ItemStack.h"


class DispenserBlock : ActorBlock {

public:
    virtual void dispenseFrom(BlockSource &, BlockPos const&)const;
    virtual void getResourceItem(Random &, Block const&, int)const;
    ~DispenserBlock();
    virtual void getVariant(Block const&)const;
    virtual void onRemove(BlockSource &, BlockPos const&)const;
    virtual void onPlace(BlockSource &, BlockPos const&)const;
    virtual void onRedstoneUpdate(BlockSource &, BlockPos const&, int, bool)const;
    virtual void getMappedFace(unsigned char, Block const&)const;
    virtual void setupRedstoneComponent(BlockSource &, BlockPos const&)const;
    virtual bool isContainerBlock()const;
    virtual void getSilkTouchItemInstance(Block const&)const;
    virtual bool asItemInstance(BlockSource &, BlockPos const&, Block const&)const;
    virtual void getPlacementBlock(Actor &, BlockPos const&, unsigned char, Vec3 const&, int)const;
    virtual void getComparatorSignal(BlockSource &, BlockPos const&, Block const&, unsigned char)const;
    virtual void tick(BlockSource &, BlockPos const&, Random &)const;
    virtual bool hasComparatorSignal()const;
    virtual void getTickDelay()const;
    virtual bool isInteractiveBlock()const;
    virtual void use(Player &, BlockPos const&)const;
    void recalcLockDir(BlockSource &, BlockPos const&);
    void ejectItem(BlockSource &, Vec3 const&, unsigned char, ItemStack const&, Container &, int)const;
    DispenserBlock(std::string const&, int);
    void ejectItem(BlockSource &, Vec3 const&, unsigned char, ItemStack const&);
    void getFacing(Block const&)const;
    void getDispensePosition(BlockSource &, Vec3 const&)const;
};
