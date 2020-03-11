#pragma once

#include "unmapped/BlockSource.h"
#include <string>
#include "../item/ItemStack.h"
#include "./ActorBlock.h"
#include "../util/BlockPos.h"
#include "../actor/Actor.h"
#include "../util/Vec3.h"
#include "../actor/Player.h"
#include "../util/Random.h"
#include "../container/Container.h"
#include "../../unmapped/Block.h"


class DispenserBlock : ActorBlock {

public:
    virtual ~DispenserBlock();
    virtual void tick(BlockSource &, BlockPos const&, Random &)const;
    virtual bool isContainerBlock()const;
    virtual bool isInteractiveBlock()const;
    virtual void onPlace(BlockSource &, BlockPos const&)const;
    virtual void onRemove(BlockSource &, BlockPos const&)const;
    virtual void onRedstoneUpdate(BlockSource &, BlockPos const&, int, bool)const;
    virtual void setupRedstoneComponent(BlockSource &, BlockPos const&)const;
    virtual void getResourceItem(Random &, Block const&, int)const;
    virtual bool asItemInstance(BlockSource &, BlockPos const&, Block const&)const;
    virtual void use(Player &, BlockPos const&)const;
    virtual void getPlacementBlock(Actor &, BlockPos const&, unsigned char, Vec3 const&, int)const;
    virtual bool hasComparatorSignal()const;
    virtual void getComparatorSignal(BlockSource &, BlockPos const&, Block const&, unsigned char)const;
    virtual void getVariant(Block const&)const;
    virtual void getMappedFace(unsigned char, Block const&)const;
    virtual void getSilkTouchItemInstance(Block const&)const;
    virtual void getTickDelay()const;
    virtual void dispenseFrom(BlockSource &, BlockPos const&)const;

    DispenserBlock(std::string const&, int);
    void getDispensePosition(BlockSource &, Vec3 const&)const;
    void getFacing(Block const&)const;
    void ejectItem(BlockSource &, Vec3 const&, unsigned char, ItemStack const&, Container &, int)const;
    void ejectItem(BlockSource &, Vec3 const&, unsigned char, ItemStack const&);
    void recalcLockDir(BlockSource &, BlockPos const&);
};
